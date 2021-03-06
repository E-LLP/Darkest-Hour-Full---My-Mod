 
 ############################## 
 # Country definition for SPR # 
 ############################## 
   
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SPR 
   regular_id             = SPA 
   intrinsic_gov_type     = left_wing_radical 
   manpower               = 30 
   # Resource Reserves 
energy                 = 2280
metal                  = 1140
rare_materials         = 570
   oil                    = 500 
   supplies               = 500 
   money                  = 20 
   dissent                = 30 
   capital                = 460 
      
   transports             = 100 
   escorts                = 27 
   # Gibralter claim 
   diplomacy = 
   {  relation = {  tag = ENG value = -10  } 
     relation = {  tag = FIN value = 35  } 
     relation = {  tag = FRA value = 10  } 
     relation = {  tag = GER value = -50  } 
     relation = {  tag = IRE value = 50  } 
     relation = {  tag = ITA value = -50  } 
     relation = {  tag = POR value = -50  } 
     relation = {  tag = SOV value = -10  } 
    } 
   SpyInfo                = {  country = "SPR" NumberOfSpies = 7  } 
   # Spanish Guinea 
   nationalprovinces      = {  444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461  
                              348 440 438 436 442 443 475 437 439 452 447 990 991 469 
            455 448 449  446 462 445 459 473 465 454     450                         } 
   ownedprovinces         = {  441  444  451  466  453  460  458  472  474  471  470  467  463  468  464  457  461  456  442  443  436  438  440  475  
                              437  439  452  447  990  991   469   715      987  988  913 
               446 
               449 448 455 454 465 473 
               462 459 445 450 
               989   716 916    
                             } 
   # Spanish Guinea 
   controlledprovinces    = {  441  444  451  466  453  460  458  472  474  471  470  467  463  468  464  457  461  456  442  443  436  438  440  475  
                              437  439  452  447  990  991      715      987  988  913 
               446 469 450 
               449 448 455 454 465 473 
               462 459 445  
               989   716 916   
                             }
	claimedprovinces = {
		715 716 987 988 989 913 916
	}
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Basic Armoured Car  
2860 2870 2880 2020
#Tankette 
7600 7610 2620 2010 2630 2640
#Early Anti-Tank Artillery 
#2400
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Early Bomber 
4600 4610 4620 4630 4120 4130
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Naval Infantry
#1560 1570 1580
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Engineers
1830 1840 1850 1860
#Early Battleship 
3410 3420 3430 3440 3450 3456 3460 3470
#Improved Heavy Cruiser 
3210 3220 3230 3240 3250
#Short Range Submarine 
3610 3620 3630
#Interwar Light Cruiser 
3110 3120 3130 3140
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Modern Agriculture  
5700 5710 5010
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
##5190 
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 5620 
#Improved Great War Hospital System
14000 14010

# WWI Land Doctrines - Entente line: eng fra ita usa bel hol jap
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?

#Naval Doctrines
8010 8020 8040 8050 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 1 
     freedom           = 7 
     free_market       = 4 
     professional_army = 4 
     defense_lobby     = 4 
     interventionism   = 5 
    } 
	peacetime_ic_mod       = 0.6
   headofstate            = {  type = 9 id = 255001  } 
   headofgovernment       = {  type = 9 id = 255002  } 
   foreignminister        = {  type = 9 id = 255003  } 
   armamentminister       = {  type = 9 id = 255004  } 
   ministerofsecurity     = {  type = 9 id = 255005  } 
   ministerofintelligence = {  type = 9 id = 255006  } 
   chiefofstaff           = {  type = 9 id = 255007  } 
   chiefofarmy            = {  type = 9 id = 255008  } 
   chiefofnavy            = {  type = 9 id = 255009  } 
   chiefofair             = {  type = 9 id = 255010  } 
   dormant_leaders        = {  255008 255051  } 
   # Spanish Troops 
   landunit = 
   {  id       = {  type = 27600 id = 5  } 
     location = 460 
     name     = "1a Cuerpo de Ej�rcito" 
     Division = 
     {  id   = {  type = 27600 id = 6  } 
       name = "1a Divisi�n Org�nica" 
       type = infantry 
	   model      = 6
      } 
     Division = 
     {  id    = {  type = 27600 id = 7  } 
       name  = "2a Divisi�n Org�nica" 
       type  = infantry 
	   model      = 7
       extra = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id   = {  type = 27600 id = 8  } 
       name = "1a Divisi�n de Caballer�a" 
       type = cavalry 
	   model      = 7
      } 
     Division = 
     {  id       = {  type = 27600 id = 9  } 
       name     = "Brigada Blindada" 
       type     = light_armor 
       model    = 0
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 10  } 
     location = 436 
     name     = "2o Cuerpo del Ej�rcito" 
     Division = 
     {  id    = {  type = 27600 id = 11  } 
       name  = "3a Divisi�n Org�nica" 
       type  = infantry 
	   model      = 7
       extra = artillery 
	   brigade_model = 0
      } 
     Division = 
     {  id   = {  type = 27600 id = 12  } 
       name = "4a Divisi�n Org�nica" 
       type = infantry 
	   model      = 6
      } 
     Division = 
     {  id   = {  type = 27600 id = 13  } 
       name = "5a Divisi�n Org�nica" 
       type = infantry 
	   model      = 6
      } 
     Division = 
     {  id   = {  type = 27600 id = 14  } 
       name = "Brigadas de Monta�a" 
       type = bergsjaeger 
	   model      = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 15  } 
     location = 464 
     name     = "3er Cuerpo de Ej�rcito" 
     Division = 
     {  id    = {  type = 27600 id = 16  } 
       name  = "6a Divisi�n Org�nica" 
       type  = infantry 
	   model      = 7
       extra = anti_air 
	   brigade_model = 0
      } 
     Division = 
     {  id   = {  type = 27600 id = 17  } 
       name = "7a Divisi�n Org�nica" 
       type = infantry 
	   model      = 6
      } 
     Division = 
     {  id    = {  type = 27600 id = 18  } 
       name  = "8a Divisi�n Org�nica" 
       type  = infantry
		model      = 7	   
       extra = artillery 
	   brigade_model = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 19  } 
     location = 475 
     name     = "Comandancia de Baleares" 
     Division = 
     {  id       = {  type = 27600 id = 20  } 
       name     = "Comandancia de Baleares" 
       type     = infantry 
	   model      = 6
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 21  } 
     location = 990 
     name     = "Comandancia de Canarias" 
     Division = 
     {  id       = {  type = 27600 id = 22  } 
       name     = "Comandancia de Canarias" 
       type     = infantry 
	   model      = 6
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 23  } 
     location = 715 
     name     = "Ej�rcito de �frica" 
     Division = 
     {  id   = {  type = 27600 id = 24  } 
       name = "Circunscripci�n Occidental" 
       type = infantry 
	   model      = 6
      } 
     Division = 
     {  id   = {  type = 27600 id = 25  } 
       name = "Circunscripci�n Oriental" 
       type = infantry 
	   model      = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 26  } 
     location = 987 
     name     = "Fuerzas del Sahara" 
     Division = 
     {  id       = {  type = 27600 id = 27  } 
       name     = "Legi�n del Sahara" 
       type     = infantry 
	   model      = 6
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 28  } 
     location = 913 
     name     = "Guardias Coloniales" 
     Division = 
     {  id       = {  type = 27600 id = 29  } 
       name     = "Guardias Coloniales" 
       type     = militia 
	   model      = 4
       strength = 30 
      } 
    } 
   # Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases. 
	navalunit = { 
		id = { type = 27600 id = 30 } 
		name = "Base Naval C�diz" 
		location = 473 
		base = 473 
		division = { 
			id = { type = 27600 id = 31 } 
			name = "ARE Rep�blica" 
			type = light_cruiser 
			model = 3 
			strength = 60 
			} 
		division = { 
			id = { type = 27600 id = 32 } 
			name = "Flotilla de Escolta" 
			type = destroyer 
			model = 2 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 33 } 
		name = "Flotilla M�ndez N��ez" 
		location = 441 
		base = 441 
		division = { 
			id = { type = 27600 id = 34 } 
			name = "ARE M�ndez N��ez" 
			type = light_cruiser 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 35 } 
		name = "Escuadr�n de Batalla" 
		location = 436 
		base = 436 
		division = { 
			id = { type = 27600 id = 42 } 
			name = "1a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 43 } 
			name = "2a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 40 } 
			name = "Flotilla de Torpederas No. 1" 
			type = destroyer 
			} 
		division = { 
			id = { type = 27600 id = 41 } 
			name = "Flotilla de Torpederas No. 2" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 44 } 
		name = "Armada Colonial" 
		location = 990 
		base = 990 
		division = { 
			id = { type = 27600 id = 45 } 
			name = "Flotilla de Torpederas No. 3" 
			type = destroyer 
			model = 1 
			} 
		division = { 
			id = { type = 27600 id = 47 } 
			name = "3a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 48 } 
			name = "4a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 2314 } 
			name = "Flotilla de Destructores n.1" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 49 } 
		name = "Grupo C" 
		location = 464 
		base = 464 
		division = { 
			id = { type = 27600 id = 50 } 
			name = "S101 Flotilla" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 27600 id = 72 } 
			name = "S103 Flotilla" 
			type = submarine 
			model = 3 
			} 
		}     
	navalunit = { 
		id = { type = 27600 id = 1946 } 
		name = "I Flotilla de la Armada" 
		location = 436 
		base = 436 
		division = { 
			id = { type = 27600 id = 36 } 
			name = "ARE Jaime I" 
			type = battleship 
			model = 2 
			strength = 50 
			} 
		division = { 
			id = { type = 27600 id = 37 } 
			name = "ARE Espa�a" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 27600 id = 39 } 
			name = "ARE Almirante Cervera" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 54 } 
			name = "ARE Libertad" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 38 } 
			name = "ARE Miguel de Cervantes" 
			type = light_cruiser 
			model = 3 
			} 
		} 
   airunit = 
   {  location = 460 
     base     = 460 
     id       = {  type = 27600 id = 55  } 
     name     = "1a Escuadra A�rea" 
     Division = 
     {  id       = {  type = 27600 id = 56  } 
       name     = "1er Grupo T�ctico" 
       strength = 30 
       type     = tactical_bomber
		model    = 4  
      } 
     Division = 
     {  id       = {  type = 27600 id = 57  } 
       name     = "2o Grupo T�ctico" 
       strength = 30 
       type     = tactical_bomber 
	   model    = 4
      } 
    } 
   airunit = 
   {  location = 436 
     base     = 436 
     id       = {  type = 27600 id = 58  } 
     name     = "2a Escuadra A�rea" 
     Division = 
     {  id       = {  type = 27600 id = 59  } 
       name     = "1er Grupo de Caza" 
       strength = 30 
       type     = interceptor 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 27600 id = 60  } 
       name     = "3er Grupo de Caza" 
       strength = 30 
       type     = interceptor 
	   model    = 6
      } 
    }  
   airunit = 
   {  location = 990 
     base     = 990 
     id       = {  type = 27600 id = 64  } 
     name     = "Fuerzas A�reas del �frica" 
     Division = 
     {  id       = {  type = 27600 id = 65  } 
       name     = "1er Grupo de Bombardeo" 
       strength = 30 
       type     = tactical_bomber 
	   model    = 4
      } 
     Division = 
     {  id       = {  type = 27600 id = 66  } 
       name     = "2o Grupo de Caza" 
       strength = 30 
       type     = interceptor 
	   model    = 5
      } 
    } 
   division_development = 
   {  name  = "ARE Canarias" 
     type  = heavy_cruiser 
     model = 4 
     cost  = 0.3 
     id    = {  type = 27600 id = 500  } 
     date  = {  year = 1936 month = march day = 1  } 
    } 
   division_development = 
   {  name  = "ARE Baleares" 
     type  = heavy_cruiser 
     model = 4 
     cost  = 0.3 
     id    = {  type = 27600 id = 501  } 
     date  = {  year = 1936 month = june day = 1  } 
    } 
  } 
 
