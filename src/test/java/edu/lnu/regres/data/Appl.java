package edu.lnu.regres.data;

import edu.lnu.regres.data.users.IUser;
import edu.lnu.regres.data.users.UserRepository;

public class Appl {
	public static void main(String[] args) {
		// 1. Classic Pojo/Bean
//		User user = new User("firstname1", "lastname2",
//				"login1", "password1", "role1",
//				"email1", "address1");
//		System.out.println("login = " + user.getLogin());
		//
		// 2. Use Default Constructor and Setters
//		User user = new User();
//		user.setFirstname("firstname2");
//		user.setLastname("lastname2");
//		user.setLogin("login2");
//		user.setPassword("password2");
//		user.setRole("role2");
//		user.setEmail("email2");
//		user.setAddress("address2");
//		System.out.println("login = " + user.getLogin());
		//
		// 3. Add Fluent Interface
//		User user = new User()
//			.setFirstname("firstname3")
//			.setLastname("lastname3")
//			//.setLogin("login3")		// mistake
//			.setPassword("password3")
//			.setRole("role3")
//			.setEmail("email3")
//			.setAddress("address3");
//		System.out.println("login = " + user.getLogin().toLowerCase());
		//
		// 4. Add Static factory
//		User user = User.get()
//				.setFirstname("firstname4")
//				.setLastname("lastname4")
//				.setLogin("login4")		// mistake
//				.setPassword("password4")
//				.setRole("role4")
//				.setEmail("email4")
//				.setAddress("address4");
//			System.out.println("login = " + user.getLogin().toLowerCase());
		//
		// 5. Add Builder
//		User user = User.get()
//				.setFirstname("firstname5")
//				.setLastname("lastname5")
//				.setLogin("login5")
//				.setPassword("password5")
//				.setRole("role5")
//				//.setEmail("email5")
//				.setAddress("address5")
//				.build();
//		System.out.println("login = " + user.setLogin("aaa")); // Error
//		System.out.println("login = " + user.getLogin());
		//
		// 6. Dependency Inversion
//		IUser user = User.get()
//				.setFirstname("firstname6")
//				.setLastname("lastname6")
//				.setLogin("login6")
//				.setPassword("password6")
//				.setRole("role6")
//				//.setEmail("email6")
//				.setAddress("address6")
//				.build();
//		//System.out.println("login = " + user.setLogin("aaa")); // Error
//		//System.out.println("login = " + ((User) user).setLogin("aaa"));
//		System.out.println("login = " + user.getLogin());
		//
		// 7. Add Repository
		// 8. Use Singletone
		IUser user = UserRepository.get().admin();
		System.out.println("login = " + user.getLogin());
	}
}
