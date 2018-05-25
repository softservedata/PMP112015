package edu.lnu.regres.tests;

import org.testng.Assert;
import org.testng.annotations.DataProvider;
import org.testng.annotations.Test;

import edu.lnu.regres.data.users.IUser;
import edu.lnu.regres.data.users.UserRepository;
import edu.lnu.regres.pages.AdminPage;
import edu.lnu.regres.pages.LoginPage;

public class SmokeTest extends TestRunner {

	@DataProvider
	public Object[][] adminCredentionals() {
		return new Object[][] {
			//{ "work", "qwerty" }
			{ UserRepository.get().admin() }
		};
	}
	
	@Test(dataProvider = "adminCredentionals")
	//public void verifyAdminLogin(String login, String password) throws Exception {
	public void verifyAdminLogin(IUser admin) throws Exception {
		//AdminPage adminPage = new LoginPage(driver)
			//.successAdminLogin(login, password);
		AdminPage adminPage = loadApplication()
			.successAdminLogin(admin);
		//Assert.assertEquals(adminPage.getUserLabelText(), login);
		Assert.assertEquals(adminPage.getUserLabelText(), admin.getLogin());
		Thread.sleep(2000);
		//
		LoginPage loginPage = adminPage.successLogout();
		Assert.assertTrue(loginPage.getLoginLogoPictureName()
				.contains(LoginPage.PICTURE_NAME));
		Thread.sleep(2000);
	}
}
