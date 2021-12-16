//cpp proyecto1.cpp: 
//zap515 Ricardo Duarte Hurtado
//historia interactiva

#include <iostream> //librerias
#include <math.h>
#include <stdio.h>
#include<cstring>
#include <string>
#include <locale>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS //evitar errores
#pragma warning(disable:4996)
using namespace std;
int main() //main
{
	string continuar, decicion, comida; //variables string para las decidiones
	system("color f0");// cambiar el color de fondo
	cout << "bienvenido a esta particular y rara historia hecha por mi para continuar presione cualquier tecla y enter para elegir una opc�on, escriba el nombre de la misma que se aclarara entre || si no escribes bien una opc�on simplemente tendras " << endl;
	cout << "que volver a escrivirla correctamente si quieres reiniciar simplemente cierra el prograama y todo lo que hallas llevado se perdera y al volver a abrirlo podras volver a iniciar" << endl; //aviso y "tutorial"
	cin >> continuar;
	decicion = "no_se"; // valor inicial decicion
	for (int i = 0; decicion != "tomarlo" && decicion != "tire"; i++) {//ciclo for para repetir cada vez que el usuario se equivoque
		system("cls"); //limpiar la pantalla
		system("color e0"); //cambiar el color de fondo y texto
		cout << "un dia pablecino estaba en su casa feliz por que hoy era el dia en el cual iva a ir a su primera convencion asi que queria que todo saliera bien despues de preparar toda su maleta con las cosas necesarias y haver resuelto todo lo que " << endl;
		cout << "necesitaba resolver para poder entrar a la convencion como tal decide ir a tomar un poco de agua asi que se sirve un vaso con agua para |tomarlo| ounque tambien podria pasar que sin querer lo |tire|" << endl; //texto a imprimir
		cin >> decicion; //lo que el usuario decide hacer
	}
	if (decicion == "tomarlo") { //ruta en la cual la decicion fue la opcion 1 
		for (int i = 0; decicion != "esperar" && decicion != "cobrar"; i++) {
			system("cls");
			system("color d0");
			cout << "despues de ese refrescante agua natural vas en camino al coche que te va a llevar tanto a ti como a 2 amigos los cuales decidieron acompañarte en tu viaje y disfrutar de la experiencia por que tambien les gusta el tema de la " << endl;
			cout << "convencion pero aparentemente se ha retrasado un poco el coche asi que podrias o |esperar| a que llegue el conductor teniendo fe en que llegara o en cambio ir a |cobrar| a tu amigo lo que te deve " << endl;
			cin >> decicion;

		}
		if (decicion == "esperar") {
			for (int i = 0; decicion != "restaurante" && decicion != "comer"; i++) {
				system("cls");
				system("color c0");
				cout << "al haber esperado despues de un rato llega el conductor con tus 2 amigos en el aciento tracero los cuales estan tan emocionados como tu de lo que va a pasar en este viaje y en la convencion el viaje como tal sera largo  aproximadamente " << endl;
				cout << "unas 8 horas  asi que es muy probable que quieran ir a un |restaurante| que quede de camino en lo que llegan o |comer| alla pero tomando  en cuenta de que son las 10 de la mañana y ya desayunaron todos " << endl;
				cin >> decicion;
			}
			if (decicion == "restaurante") {
				for (int i = 0; decicion != "quedarse" && decicion != "irse"; i++) {

					system("cls");
					system("color b0");
					cout << "introduce una comida de carretera aleatoria (incluso puedes poner cosas que no sean comida y reirte un rato)" << endl;
					cin >> comida;
					cout << "despues de unas 4 horas a las 2 de la tarde deciden comer de forma normal " << comida << " que tubo un sabor bastante mas que agradable y que sin dudas valdria la pena volver a probar y aprovechando la parada deciden explorar un poco" << endl;
					cout << "lo que resulta en que encuentran una increible y grandiosa piedra la cual tiene forma de piedra despues de eso deciden irse denuevo al coche y seguir su viaje y ya al estar en el hotel en el cual se quedaran los presios son algo" << endl;
					cout << "altos pero se ve que es buen hotel, deciden |quedarse| o |irse| a otro lugar mas barato ?" << endl;
					cin >> decicion;
				}
				if (decicion == "quedarse") {
					for (int i = 0; decicion != "normales" && decicion != "apoyo"; i++) {
						system("cls");
						system("color a0");
						cout << "al haverte quedado en ese hotel que a pesar de caro era un buen hotel parece que tendran un mejor descanzo deciden ir ya de camino a la convenion la cual se ve bastante grande asi que que deciden? comprar las entradas |normales| las" << endl;
						cout << "cuales eran mas baratos pero incluyen menos cosas o las entradas de |apoyo| las cuales son mas caras pero te incluyen la experiencia completa de la convencion ademas de algunos regalos " << endl;
						cin >> decicion;
					}
					if (decicion == "normales") {
						system("cls");
						system("color 90");
						cout << "devido a que te quedaste en un hotel caro pero de buena calidad y que obtubiste las entradas normales tubiste el dinero para comprar pocas cosas pero cosas las cuales se ven de calidad y que valen la pena como un recuerdo eterno de tu" << endl;
						cout << "experiencia agradable en la convencion en la cual viste concursos, arte, gente con disfraces realmente impresionantes e incluso baile lo unico a lo que no pudiste entrar es la sala de eventos especiales a las cuales entraba poca gente" << endl;
						cout << " en la cual no se realmente que sucedia." << endl;
						return 0;
					}
					else {
						system("cls");
						system("color 80");
						cout << "devido a que te quedaste en un hotel caro pero de buena calidad y que obtubiste las entradas de apoyo no tubiste dinero para comprar nada en absoluto pero tubiste la experiencia completa de la convencion y ademas de que tubiste un  " << endl;
						cout << "descanzo bastante bueno en el hotel por lo que tu experiencia fue excelente tubiste acceso a todo lo que hay en la convencion incluso a la sala especial la cual tenia un evento diferente cada dia de cooperacion de los que compraron el " << endl;
						cout << "pase para apoyo eran eventos divertidos y que valen la pena." << endl;
						return 0;
					}
				}
				else {
					for (int i = 0; decicion != "normales" && decicion != "apoyo"; i++) {
						system("cls");
						system("color 70");
						cout << "devido a que te fuiste a buscar otro hotel encontraste uno mas barato pero de una calidad ligeramente inferior por lo que tu descamzo no era tan bueno como podria serlo pero igual no se ve tan malo asi que despues de ver el hotel se van y" << endl;
						cout << "llegan a la convencion y hay una fila larga para comprar las entradas las cuales son de 2 tipos |normales| y de |apoyo| las normales concisten en entradas normales que re permiten tener acceso a la mayoria de las cosas de la convencion con" << endl;
						cout << "pocas excepciones y las de apoyo te permiten entrar a todo en la convencion ademas de que resivas algunos regalos de parte de los organizadores" << endl;
						cin >> decicion;
					}
					if (decicion == "normales") {
						system("cls");
						system("color 60");
						cout << "devido a que te quedaste en un hotel barato pero de mediana calidad y que obtubiste las entradas normales tubiste dinero para comprar bastantes recuerdos y cosas geniales tu experiencia no fue la mejor pero fue buena con un descanzo  " << endl;
						cout << "regular en el hotel por lo que tu experiencia fue agradable tubiste acceso a todo la mayoria de lo que hay en la convencion excepto sala especial la cual tenia un evento diferente cada dia de cooperacion de los que compraron el " << endl;
						cout << "pase para apoyo eran eventos divertidos segun un comerciante con el cual hablaste un rato" << endl;
						return 0;
					}
					else {
						system("cls");
						system("color 50");
						cout << "devido a que te quedaste en un hotel barato pero de mediana calidad y que obtubiste las entradas de apoyo tubiste dinero para comprar pocas cosas pero tubiste la experiencia completa de la convencion y ademas de que tubiste un  " << endl;
						cout << "descanzo regular en el hotel por lo que tu experiencia fue muy buena, tubiste acceso a todo lo que hay en la convencion incluso a la sala especial la cual tenia un evento diferente cada dia de cooperacion de los que compraron el " << endl;
						cout << "pase para apoyo eran eventos divertidos y que valen la pena" << endl;
						return 0;
					}
				}
			}
			else {
				for (int i = 0; decicion != "caro" && decicion != "barato"; i++) {
					system("cls");
					system("color 40");
					cout << "decidieron que su vuaje seria directo sin siquiera comerpor ende pasan y llegan a la ciudad y deciden comer algo mejor de lo que podrian haver conseguido comer en la carretera, despues de un rato de buscar" << endl;
					cout << "el cual pago tu amigo por buena voluntad y la comida les gusto mucho haciendo que tengan mas interes en conocer la ciudad por lo tanto ahora deven elegir en que hotel se quedaran despues de haver estado viendo" << endl;
					cout << "distintas partes de la ciudad pero no tantas pero tienen 2 opciones en mente uno que aparenta ser mas |caro| pero con mejor calidad o uno que aparenta ser |barato| pero bueno " << endl;
					cin >> decicion;
				}
				if (decicion == "caro") {
					for (int i = 0; decicion != "turisticas" && decicion != "sur"; i++) {
						system("cls");
						system("color 30");
						cout << "debido a que su interes se fue mas a la parte de la ciudad deciden comprar boletos normales y estar solamente la mitad del dia en la convencion y la otra mitad explorando las distintas zonas que tiene la ciudad" << endl;
						cout << "para ofrecer asi que que deciden? explorar las zonas |turisticas| de la ciudad para tener una experiencia segura paro aprobada para ser agradable y convencerte de que la ciudad es muy buena o deciden mejor" << endl;
						cout << "aventurarse a conocer las zonas no tan populares pero existentes de la ciudad y ubicadas mas que nada en el |sur| de la misma?" << endl;
						cin >> decicion;
					}
					if (decicion == "turisticas") {
						system("cls");
						system("color 20");
						cout << "la experiencia fue bastante buena devido a que tanto disfrutaste tanto de la convencion como de la ciudad que tenia varios lugares interesantes con razones mas que suficiente para ser lugares turisticos asi" << endl;
						cout << "como tal la pasaste bien y bonito haciendo varias cosas y conociendo varias nuevas haviendo sido un buen descanzo de la rutina" << endl;
						return 0;
					}
					else {
						system("cls");
						system("color 10");
						cout << "la experiencia como tal fue regular, la convencion estubo buena pero las zonas estaban peor de lo que esperabas aun asi no quita el hecho de que el viaje halla valido la pena y te hallas divertido incluso con" << endl;
						cout << "el hecho de haver sido asaltado almenos sabes que tu celular esta en manos de alguien que podra beneficiarse y a su familia mas que tu por la necesidad pero como tal no fue mal viaje minimo descanzaron bien " << endl;
						return 0;
					}
				}
				else {
					for (int i = 0; decicion != "turisticas" && decicion != "sur"; i++) {
						system("cls");
						system("color f1");
						cout << "debido a que su interes se fue mas a la parte de la ciudad deciden comprar boletos normales y estar solamente la mitad del dia en la convencion y la otra mitad explorando las distintas zonas que tiene la ciudad" << endl;
						cout << "para ofrecer asi que que deciden? explorar las zonas |turisticas| de la ciudad para tener una experiencia segura paro aprobada para ser agradable y convencerte de que la ciudad es muy buena o deciden mejor" << endl;
						cout << "aventurarse a conocer las zonas no tan populares pero existentes de la ciudad y ubicadas mas que nada en el |sur| de la misma?" << endl;
						cin >> decicion;
					}
					if (decicion == "turisticas") {
						system("cls");
						system("color e1");
						cout << "la experiencia fue bastante buena devido a que tanto disfrutaste tanto de la convencion como de la ciudad que tenia varios lugares interesantes con razones mas que suficiente para ser lugares turisticos asi" << endl;
						cout << "como tal la pasaste bien y bonito haciendo varias cosas y conociendo varias nuevas pero no descanzando tan bien como podrian haverlo hecho" << endl;
						return 0;
					}
					else {
						system("cls");
						system("color d1");
						cout << "la experiencia como tal fue mala el sueño no te permitia disfrutar la convencion ni el viaje las zonas no eran tan interesantes y encima te asaltaron durante el mismo perdiendo tu celular algo que ciertamente" << endl;
						cout << "hiso enojar por lo que a la proxima concideras mejor solo ir a la convencion todo el dia" << endl;
						return 0;
					}
				}
			}
		}
		else {
			for (int i = 0; decicion != "revisar" && decicion != "enojarte"; i++) {
				system("cls");
				system("color c1");
				cout << "decidiste ir con tu amigo a cobrar lo que te debe lo cual aparenta haver sido un error conciderable ya que el te invito a pasar y te dio una larga platica de por que no pudo pagarte por lo que tus amigos te digeron" << endl;
				cout << "que ya havian llegado pero no viste tu celular asi que seguiste con el y no te pago pero tubiste una buena platica con el a pesar de eso cuando volviste tus amigos ya no estaban solo tardaste 15 minutos pero " << endl;
				cout << "sin ti asi que que decides? |revisar| tu celular para ver el por que? o simplemente |enojarte| y regresar a tu casa" << endl;
				cin >> decicion;
			}
			if (decicion == "revisar") {
				for (int i = 0; decicion != "nada" && decicion != "jugar"; i++) {
					system("cls");
					system("color b1");
					cout << "al revisar te das cuanta de que tus amigos si querian esperarte y hicieron lo posible por hacerlo pero el chofer no quiso esperar y solo quiso estar a tiempo para algo que tenia que hacer alla por lo que " << endl;
					cout << "no podian esperarte asi que te dejaron no tanto por decicion propia asi que en tristeza vuelves a tu casa quedandote con las ganas de haver ido por lo que puedes o no hacer |nada| y dormir o |jugar| league of legends " << endl;
					cout << "hasta quedarte dormido" << endl;
					cin >> decicion;
				}
				if (decicion == "jugar") {
					system("cls");
					system("color a1");
					cout << "al quedarte y jugar lol te divertiste un rato y pudiste quitar algo de tu tristeza pero igualmente la experiencia de esa convencion no es algo que tendras otra vez en tu vida por lo que sigue siendo triste pero almenos" << endl;
					cout << "pudiste remplazarlo con algo que te gusta" << endl;
					return 0;

				}
				else {
					system("cls");
					system("color 91");
					cout << "simplemente te quedaste acostado en tu cama sin hacer nada mas que recordar aquel viaje que pudo ser genial y que por querer cobrar lo que te deben no fuiste y a pesar de que pudiste hacer algo para no sentirte mal " << endl;
					cout << " decidiste simplemente quedarte y dormir en tu tristeza" << endl;
					return 0;
				}
			}
			else {
				for (int i = 0; decicion != "golpear" && decicion != "calmarte"; i++) {
					system("cls");
					system("color 81");
					cout << "al no revisar te quedas con el enojo y la idea de que te dejaron por lo que decides volver a tu casa enojado algo lo cual solo te da ganas de golpear algo asi que que decides? buscar algo lo cual puedas |golpear| o " << endl;
					cout << "intentar |calmarte| para solucionar tus problemas de una forma mas pacifica que no recurra a la violencia y que simplemente haga que te sientas mal un rato como maximo almenos es lo que esperas que suceda por que no" << endl;
					cout << "quieres sentirte tan triste" << endl;
					cin >> decicion;
				}
				if (decicion == "golpear") {
					system("cls");
					system("color 71");
					cout << "por suerte en ese momento lo que mas cerca esta de ti es tu almohada por lo que simplemente decides agarrarla y golpearla contra el colchon con una fuerza tal que terminas destruyendo tu almohada por lo que la frustracion" << endl;
					cout << "se va en gran parte y duermes sin almohada pero duermes mas tranquilo" << endl;
					return 0;

				}
				else {
					system("cls");
					system("color 61");
					cout << "tu enojo al intentar calmarte se conveierte en tristeza por lo que estando realmente triste decides simplemente acostarte y llorar sobre tu cama recordando aquel momento en el que vistte que se fueron sin ti se sintio " << endl;
					cout << "bastante como una traicion y a la vez penzando en lo que pudo ser te acuestas llorando y te duermes entre lagrimas deceando haver podido cambiar el pasado" << endl;
					return 0;
				}
			}
		}
	}
	else { // ruta en la cual la decicion fue la opcion numero 2 despues de esto solo sigo el mismo patron 
		for (int i = 0; decicion != "hacerlo" && decicion != "alternativa"; i++) {
			system("cls");
			system("color 51");
			cout << "en vez de haver tomado el agua la tiraste lo que te hace sentir muy torpe pero mas que nada enojado con una ira que nunca havias experimentado antes y no es especificamente por haver tirado el vaso con agua sino que " << endl;
			cout << "es por todo aquello que has hecho mal en tu vida, todo lo que te ha enojado pero nunca expresaste todo aquello que realmentete ha hecho enojar por lo que en medio de tu ira un recuerdo es mas potente dentro de tu ser" << endl;
			cout << "rapidamente cancelas el viaje y haces un plan para hacer pagar a un viejo amigo por algo que aun te tiene mal pero crees que es mucho decides |hacerlo| o buscar una |alternativa|?" << endl;
			cin >> decicion;
		}
		if (decicion == "alternativa") {
			for (int i = 0; decicion != "fogata" && decicion != "vas"; i++) {
				system("cls");
				system("color 41");
				cout << "simplemente agarras una hacha y vas a desahogarte a un lugar en el bosque despes de un rato llegas cerca del area perfecta sin nadie que te vea ni nadie que pueda pedir ayuda por lo que empieza a agarrar el hacha y " << endl;
				cout << "con fuerza y brutalidad le das un hachazo a un pino solitario el cual no tenia ningun nido ni animal arriba tras eso te quedas penzando que podria ser perfecto cortarlo en trozos y hacer una |fogata| asi que decides" << endl;
				cout << "eso? o simplemente te |vas| ya bastante mas calmado?" << endl;
				cin >> decicion;
			}
			if (decicion == "fogata") {
				system("cls");
				system("color 31");
				cout << "sin estar ya enojado con nada simplemente te vas a casa con algo de leña y terminas frente a una fogata en paz disfrutando del calor y siendo feliz con lo que a dia de hoy tienes que a pezar de no ser lo mejor es lo " << endl;
				cout << "suficiente para hacerte feliz por ahora" << endl;
				return 0;
			}
			else {
				system("cls");
				system("color 21");
				cout << "sin estar ya enojado con nada simplemente te vas a casa terminas frente a tu computadora siendo feliz con lo que a dia de hoy tienes que a pezar de no ser lo mejor es lo " << endl;
				cout << "para hacerte feliz por ahora ademas de que te va bien en tu partida en minecraft" << endl;
				return 0;
			}
			
		}
		else {
			for (int i = 0; decicion != "tocar" && decicion != "retiras"; i++) {
				system("cls");
				system("color 01");
				cout << "agarras simplemente unas cuantas cosas que contribuyan a tu plan y decides ir a la casa de quien te debe dinero y a cada paso tu decicion se vuelve mas y mas dificil de mantener solo los recuerdos de los buenos " << endl;
				cout << "momentos intentan detenerte y llegas a la puerta peroel miedo es extremadamente grande asi que tienes que decidir que hacer |tocar| la puerta para que te abran con tu plan en marcha  " << endl;
				cout << "eso? o simplemente te |retiras|?" << endl;
				cin >> decicion;
			}
			if (decicion == "tocar") {
				system("cls");
				system("color f2");
				cout << "el te invita a pasar amablemente lo que te desanima a hacerlo aun mas y te ofrece te tu aceptas y te sientas con tu plan en la mente arrepintiendote cada vez mas ya llegando el con el te te valanceas hacia el y " << endl;
				cout << "en medio de un gran llanto le pides perdon el confundido te intenta calmar tu plan era cobrar lo que te debe con su vida pero el es demaciado buena persona para que puedas hacerlo " << endl;
				return 0;
			}
			else {
				system("cls");
				system("color e2");
				cout << "al retirarte te empiezas a calmar y la culpa se empieza a ir poco a poco tu plan ya no se ejecuto y tras recordar cual era tu plan crees que es lo mejor que no se halla hecho tu plan ya que involucraba demaciada" << endl;
				cout <<"crueldad a alguien que no lo merecia " << endl;
				return 0;
			}
		}
	}
	return 0;
}
