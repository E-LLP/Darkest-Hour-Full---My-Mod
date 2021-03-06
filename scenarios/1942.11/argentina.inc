 
 ############################## 
 # Country definition for ARG # 
 ############################## 
  
               

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = ARG 
   manpower               = 28 
   # Resource Reserves 
energy                 = 1620
metal                  = 810
rare_materials         = 405
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 20 
   capital                = 2050 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 3 
     free_market       = 8 
     freedom           = 6 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 3 
    } 
   nationalprovinces      = {  2050 2048 2027 2054 2045 2026 2056 2055 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2043 2049  } 
   ownedprovinces         = {  2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2049  } 
   controlledprovinces    = {  2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2049  } 
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = {
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010
#Early Bomber 
4600 4610 4620 4630 4120 4130
#SEAPLANES
4740 4750 4760
#Great War Tank 
7600 7610 2620 2010 2630
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Naval Infantry
#1560 1570 1580
#Engineers
1830 1840 1850 1860
#Medicine
5600 5610 5620
#Mechanized Agriculture 
5700 5710 5010 5020
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080  
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Improved Destroyer 
3010 3020 3030 3040 3050
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230 3240
#Great War Battleship 
3410 3420 3430 3440 3450 3456 3460
#Short Range Submarine 
3610 3620 3630
#Torpedo & ASW 18
3720 3730 3736 3740 3900
#Troopships
3810

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path (FRA / UK)
6560
#Naval Doctrines
8010 8020 8040 8050 

} 
inventions = { 3000027 }
  diplomacy =
  { relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
   SpyInfo                = {  country = "ARG" NumberOfSpies = 6  } 
   headofstate            = {  type = 9 id = 165019  } 
   headofgovernment       = {  type = 9 id = 165033  } 
   foreignminister        = {  type = 9 id = 165051  } 
   armamentminister       = {  type = 9 id = 165076  } 
   ministerofsecurity     = {  type = 9 id = 165100  } 
   ministerofintelligence = {  type = 9 id = 165121  } 
   chiefofstaff           = {  type = 9 id = 165136  } 
   chiefofarmy            = {  type = 9 id = 165148  } 
   chiefofnavy            = {  type = 9 id = 165160  } 
   chiefofair             = {  type = 9 id = 165171  } 
   dormant_ministers      = {  165001 165002 165003 165004 165005 165006 165007 165008 165009 165010 165011 165025 165141 165017 165031 165052
                               165103 165116 165134
                            }

   # Argentine OOB 
   landunit = 
   {  id       = {  type = 12000 id = 1  } 
     name     = "I Cuerpo de Ej�rcito" 
     location = 2048 # Buenos Aires 
     Division = 
     {  id       = {  type = 12000 id = 2  } 
       name     = "Supreme HQ" 
       type     = hq 
       model    = 2 
       strength = 100 
      } 
     Division = 
     {  id       = {  type = 12000 id = 3  } 
       name     = "III Brigada 'Pellegrini'" 
       strength = 100 
       type     = infantry
	   model    = 8
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 12000 id = 4  } 
       name     = "II Brigada 'San Mart�n'" 
       strength = 60 
       type     = infantry
	   model    = 8	   
       extra    = artillery 
	   brigade_model = 6
      } 
	  Division = 
     {  id       = {  type = 12000 id = 5  } 
       name     = "II Brigada de Monta�a" 
       strength = 30 
       type     = bergsjaeger 
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 12000 id = 6  } 
       name     = "I Brigada 'Ing. Krausse'" 
       strength = 60 
       type     = infantry 
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 12000 id = 7  } 
     name     = "II Cuerpo de Ej�rcito" 
     location = 2048 
     Division = 
     {  id       = {  type = 12000 id = 8  } 
       name     = "VI Brigada de Monta�a 'Villegas'" 
       strength = 35 
       type     = bergsjaeger 
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 12000 id = 9  } 
       name     = "IV Brigada de Infanter�a" 
       strength = 100 
       type     = infantry 
	   model    = 8
       extra    = anti_air 
	   brigade_model = 1
      } 
	      Division = 
     {  id       = {  type = 12000 id = 10  } 
       name     = "IX Brigada de Infanter�a" 
       strength = 60 
       type     = infantry 
	   model    = 8
      } 
    } 
	
   landunit = 
   {  id       = {  type = 12000 id = 11  } 
     name     = "III Cuerpo de Ej�rcito" 
     location = 2048 
     Division = 
     {  id       = {  type = 12000 id = 12  } 
       name     = "VI Brigada" 
       strength = 30 
       type     = cavalry 
	   model    = 9
      } 
     Division = 
     {  id       = {  type = 12000 id = 13  } 
       name     = "IV Brigada" 
       strength = 30 
       type     = cavalry 
	   model    = 9
      } 
	      Division = 
     {  id       = {  type = 12000 id = 14  } 
       name     = "IX Brigada" 
       strength = 30 
       type     = cavalry 
	   model    = 9
      } 
    } 	
	
	
	navalunit = { 
		id = { type = 12000 id = 15 } 
		name = "Argentinian Navy" 
		location = 2048 
		base = 2048 
		division = { 
			id = { type = 12000 id = 16 } 
			name = "ARA Veinticinco De Mayo" 
			type = heavy_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 12000 id = 17 } 
			name = "ARA Almirante Brown" 
			type = heavy_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 12000 id = 18 } 
			name = "ARA Moreno" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 20 } 
			name = "ARA Rivadavia" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 22 } 
			name = "ARA Independencia" 
			type = heavy_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 24 } 
			name = "ARA La Libertad" 
			type = heavy_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 26 } 
			name = "ARA Generale Belgrano" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 28 } 
			name = "ARA Generale Pueyrredon" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 30 } 
			name = "1st Destroyer Flotilla" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 12000 id = 32 } 
			name = "2nd Destroyer Flotilla" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 12000 id = 33 } 
			name = "1st Submarine Flotilla" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 34 } 
			name = "Flotilla de Destructores nro. 1" 
			type = destroyer 
			} 
		division = { 
			id = { type = 12000 id = 35 } 
			name = "Flotilla de Destructores nro. 2" 
			type = destroyer 
			} 
		}   
   airunit = 
   {  id       = {  type = 12000 id = 36  } 
     name     = "Aviaci�n del Ej�rcito" 
     location = 2048 
     base     = 2048 
     Division = 
     {  id       = {  type = 12000 id = 37  } 
       name     = "Grupo A�rea Nro. 1" 
       strength = 90 
       type     = multi_role 
       model    = 5
      } 
    } 
   airunit = 
   {  id       = {  type = 12000 id = 38  } 
     name     = "Aviaci�n Naval" 
     location = 2048 
     base     = 2048 
     Division = 
     {  id       = {  type = 12000 id = 39  } 
       name     = "Fuerza Aeronaval Nro. 1" 
       strength = 40 
       type     = naval_bomber 
       model    = 1
      } 
    } 
  } 
 