package edu.lnu.regres.tests;

import java.util.concurrent.TimeUnit;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.testng.annotations.AfterClass;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeClass;
import org.testng.annotations.BeforeMethod;

import edu.lnu.regres.pages.LoginPage;

public abstract class TestRunner {
	protected WebDriver driver;

	@BeforeClass
	public void setUpBeforeClass() {
		// For Google Chrome
		System.setProperty("webdriver.chrome.driver",
				//"C:\\Program Files\\Google\\Chrome\\Application\\chromedriver.exe");
				"target/test-classes/chromedriver-windows-32bit.exe");
		driver = new ChromeDriver();
		driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
	}

	@AfterClass
	public void tearDownAfterClass() {
		driver.quit();
	}

	@BeforeMethod
	public void setUp() throws Exception {
		driver.get("http://regres.herokuapp.com/login");
		Thread.sleep(2000);
	}

	@AfterMethod
	public void tearDown() throws Exception {
		System.out.println("\t@AfterMethod tearDown()");
	}

	protected LoginPage loadApplication() {
		return new LoginPage(driver);
	}
}
