package edu.lnu.regres.tests;

import org.testng.Assert;
import org.testng.annotations.DataProvider;
import org.testng.annotations.Test;

import edu.lnu.regres.pages.AHeaderComponent.HeaderLanguage;
import edu.lnu.regres.pages.LoginPage;
import edu.lnu.regres.pages.LoginPage.LoginPageLanguage;

public class LocalizationTest extends TestRunner {

	@DataProvider
	public Object[][] dataLanguages() {
		return new Object[][] {
			{ HeaderLanguage.ENGLISH },
			{ HeaderLanguage.RUSSIAN },
			{ HeaderLanguage.UKRAINIAN }
		};
	}
	
	@Test(dataProvider = "dataLanguages")
	public void verifyLoginLocalization(HeaderLanguage language) {
//		LoginPage loginPage = new LoginPage(driver);
//		loginPage = loginPage.chooseLanguage(language);
		LoginPage loginPage = new LoginPage(driver)
			.chooseLanguage(language);
		Assert.assertEquals(loginPage.getSubmitButtonText(),
				LoginPageLanguage.SUBMIT_BUTTON_LANGUAGE.getLocalization(language));
	}
	
}
