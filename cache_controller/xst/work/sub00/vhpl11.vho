      � H  p        W�)         �         :   
Behavioral  � �          ��  � �� �a � � "� 2� :Q B! I� Q� �) �9 �I  Z     ��  � �� �I �� � &� 6i >9 F	 M� U� � �! �1        �A �Q �a  �       �  �     �          Y  2�  J9  a�  ma  u1  }         A  6�  N!  e�  qI  y  ��          ��     v  ��          A     :   clk  A  �     p   .  Y      q          �     @     '     ' Q4     #)  *�      .�     @      '     v  *�     '      6�     :   address  6�  �     p   /  2�      .�          �     @     >�     ' Q4     :�  Bi      FQ     @      >�     v  �[     >�      N!     :   data_in  N!  �     p   0  J9      FQ          �     @     U�     ' Q4     R	  Y�      ]�     @      U�     v  �[     U�      e�     :   data_out  e�  �     p   1  a�     ]�          �     v  FS          qI     :   enable  qI  �     p   2  ma      iy          �     :   rw  y  �     p   2  u1      iy          �     :   write_to_cache  ��  �     p   3  }     iy  [      �     :   
simple_ram  ��  �        -  ��  �  �          ��  ��  �i  ��  ީ  �y  �I         �q  ��  �Q  ��  �  �a  �1          �     :   clk  �q  ��     p   8  ��      q          ��     @     �A     ' Q4     �Y  �)      �     @      �A     v  *�     �A      ��     :   address  ��  ��     p   9  ��      �          ��     @     ��     ' Q4     ��  ��      ��     @      ��     v  �[     ��      �Q     :   data_in  �Q  ��     p   :  �i      ��          ��     @     �!     ' Q4     �9  �	      ��     @      �!     v  �[     �!      ��     :   data_out  ��  ��     p   ;  ��     ��          ��     :   enable  �  ��     p   <  ީ      iy          ��     :   rw  �a  ��     p   <  �y      iy          ��     :   hit_miss  �1  ��     p   =  �I     iy  [      ��     :   	cache_ram  �  �        6  �  ��  �         � A ! (� @Q W� o1 �� � �� �� �� �Q �!        � ) $� ,� D9 [� s �� �� �� �� �i �9 �	         ��     :   clk �  ��     p   A �      q          ��     @    �     ' Q4    	� q     Y     @     �     v  �[    �     )     :   data_in )  ��     p   B A     Y          ��     :   data_from_cache $�  ��     p   B !     Y          ��     :   data_from_memory ,�  ��     p   B (�     Y          ��     @    4�     ' Q4    0� 8�     <i     @     4�     v  �[    4�     D9     :   	operation D9  ��     p   C @Q     <i          ��     @    L	     ' Q4    H! O�     S�     @     L	     v  �[    L	     [�     :   data_to_device [�  ��     p   D W�    S�          ��     @    cy     ' Q4    _� ga     kI     @     cy     v  �[    cy     s     :   data_result s  ��     p   E o1    kI          ��     @    z�     ' Q4    w ~�     ��     @     z�     v  *�    z�     ��     :   
address_in ��  ��     p   F ��     ��          ��     @    �Y     ' Q4    �q �A     �)     @     �Y     v  *�    �Y     ��     :   address_out ��  ��     p   G �    �)          ��     :   rw_out ��  ��     p   H ��     iy          ��     :   hm ��  ��     p   I ��      iy          ��     :   em �i  ��     p   J ��     iy  [      ��     :   ec �9  ��     p   J �Q     iy  [      ��     :   
read_ready �	  ��     p   K �!      iy          ��     :   cache_controller_frog ��  �        @ ��  ��  �     @    ة     ' Q4    �� ܑ     �y     @     ة     v  �[    ة     �I     :   data_from_cache_signal �I  �     p   O �a    �y �      �     
    ة  � �      �y    �1 �I     :   data_from_memory_signal ��  �     p   O �    �y ��      �     
    ة  � ��      �y    �� ��     :   data_to_device_signal �  �     p   O �    �y Y      �     
    ة  � Y      �y    q �     @    )     ' Q4    A      �     @     )     v  *�    )     &�     :   address_signal &�  �     p   P "�    � .�      �     
    )  � .�      �    *� &�     :   enable_cache 6i  �     p   Q 2�     iy  �      �     :   enable_main >9  �     p   Q :Q     iy  �      �     :   read_write_signal F	  �     p   Q B!     iy  �      �     :   read_ready_signal M�  �     p   Q I�     iy  �      �     :   hit_miss_signal U�  �     p   Q Q�     iy  �      �     \    �  ' �A     \    A  >� �A     \    ! �a �A     \    (� � �A     \    @Q  U� �A     \    W� � �A     \    o1  mb �A     \    ��  �� �A     \    � "� �A     \    �� B! �A     \    �� Q� �A     \    �� :Q �A     \    �Q 2� �A     \    �! I� �A        U �) ��    Y� ]y aa eI i1 m q t� x� |� �� �� �q �Y      �     :   CONTROL �  �     E   U �) �A  �     \     Y  ' �Q     \     2� "� �Q     \     J9 � �Q     \     a� � �Q     \     ma :Q �Q     \     u1 B! �Q     \     } I� �Q        f �9  ��    �� �� �� �� �� �� �i      �     :   MAIN_MEMORY �!  �     E   f �9 �Q  �     \     ��  ' �a     \     �� "� �a     \     �i � �a     \     �� �a �a     \     ީ 2� �a     \     �y B! �a     \     �I Q� �a        q �I  �    �	 �� �� �� ҩ ֑ �y      �     :   CACHE_MEMORY �1  �     E   q �I �a  �     %     �  �  ��     � �     �   Q//file/usersb$/bhq12/home/cache-management-FPGA/cache_controller/cache_system.vhd �  �                cache_system   
behavioral   work      cache_system   
behavioral   work      cache_system       work      std_logic_1164       IEEE      standard       std      std_logic_arith       IEEE