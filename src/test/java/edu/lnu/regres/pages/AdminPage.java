package edu.lnu.regres.pages;

import org.openqa.selenium.WebDriver;

import edu.lnu.regres.pages.AHeaderComponent.HeaderLanguage;

public class AdminPage extends AAdminMenu {

	public AdminPage(WebDriver driver) {
		super(driver);
	}
	
	// getters

	// functional
	
	// setters
	
	// business

	public LoginPage successLogout() {
		clickLogoutLink();
		return new LoginPage(driver);
	}
}
