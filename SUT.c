#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/* PROTOTYPES */
void target_1 (char* input, int len);
void target_2 (char* input, int len);
void target_2_alt (char* input, int len);
void target_3 (char* input);
void func_1 (char* input);
void func_2 (char* input);
void func_3 (char* input);
void func_4 (char* input);
void func_5 (char* input);
void func_6 (char* input);
void func_7 (char* input);
void func_8 (char* input);
void func_9 (char* input);
void func_10 (char* input);
void func_11 (char* input);
void func_12 (char* input);
void func_13 (char* input);
void func_14 (char* input);
void func_15 (char* input);
void func_16 (char* input);
void func_17 (char* input);
void func_18 (char* input);
void func_19 (char* input);
void func_20 (char* input);
void func_21 (char* input);
void func_22 (char* input);
void func_23 (char* input);
void func_24 (char* input);
void func_25 (char* input);
void func_26 (char* input);
void func_27 (char* input);
void func_28 (char* input);
void func_29 (char* input);
void func_30 (char* input);
void func_31 (char* input);
void func_32 (char* input);
void func_33 (char* input);
void func_34 (char* input);
void func_35 (char* input);
void func_36 (char* input);
void func_37 (char* input);
void func_38 (char* input);
void func_39 (char* input);
void func_40 (char* input);
void func_41 (char* input);
void func_42 (char* input);
void func_43 (char* input);
void func_44 (char* input);
void func_45 (char* input);
void func_46 (char* input);
void func_47 (char* input);
void func_48 (char* input);
void func_49 (char* input);
void func_50 (char* input);
void func_51 (char* input);
void func_52 (char* input);
void func_53 (char* input);
void func_54 (char* input);
void func_55 (char* input);
void func_56 (char* input);
void func_57 (char* input);
void func_58 (char* input);
void func_59 (char* input);
void func_60 (char* input);
void func_61 (char* input);
void func_62 (char* input);
void func_63 (char* input);
void func_64 (char* input);
void func_65 (char* input);
void func_66 (char* input);
void func_67 (char* input);
void func_68 (char* input);
void func_69 (char* input);
void func_70 (char* input);
void func_71 (char* input);
void func_72 (char* input);
void func_73 (char* input);
void func_74 (char* input);
void func_75 (char* input);
void func_76 (char* input);
void func_77 (char* input);
void func_78 (char* input);
void func_79 (char* input);
void func_80 (char* input);
void func_81 (char* input);
void func_82 (char* input);
void func_83 (char* input);
void func_84 (char* input);
void func_85 (char* input);
void func_86 (char* input);
void func_87 (char* input);
void func_88 (char* input);
void func_89 (char* input);
void func_90 (char* input);
void func_91 (char* input);
void func_92 (char* input);
void func_93 (char* input);
void func_94 (char* input);
void func_95 (char* input);
void func_96 (char* input);
void func_97 (char* input);
void func_98 (char* input);
void func_99 (char* input);
void func_100 (char* input);
void func_101 (char* input);
void func_102 (char* input);
void func_103 (char* input);
void func_104 (char* input);
void func_105 (char* input);
void func_106 (char* input);
void func_107 (char* input);
void func_108 (char* input);
void func_109 (char* input);
void func_110 (char* input);
void func_111 (char* input);
void func_112 (char* input);
void func_113 (char* input);
void func_114 (char* input);
void func_115 (char* input);
void func_116 (char* input);
void func_117 (char* input);
void func_118 (char* input);
void func_119 (char* input);
void func_120 (char* input);
void func_121 (char* input);
void func_122 (char* input);
void func_123 (char* input);
void func_124 (char* input);
void func_125 (char* input);
void func_126 (char* input);
void func_127 (char* input);
void func_128 (char* input);
void func_129 (char* input);
void func_130 (char* input);
void func_131 (char* input);
void func_132 (char* input);
void func_133 (char* input);
void func_134 (char* input);
void func_135 (char* input);
void func_136 (char* input);
void func_137 (char* input);
void func_138 (char* input);
void func_139 (char* input);
void func_140 (char* input);
void func_141 (char* input);
void func_142 (char* input);
void func_143 (char* input);
void func_144 (char* input);
void func_145 (char* input);
void func_146 (char* input);
void func_147 (char* input);
void func_148 (char* input);
void func_149 (char* input);
void func_150 (char* input);
void func_151 (char* input);
void func_152 (char* input);
void func_153 (char* input);
void func_154 (char* input);
void func_155 (char* input);
void func_156 (char* input);
void func_157 (char* input);
void func_158 (char* input);
void func_159 (char* input);
void func_160 (char* input);
void func_161 (char* input);
void func_162 (char* input);
void func_163 (char* input);
void func_164 (char* input);
void func_165 (char* input);
void func_166 (char* input);
void func_167 (char* input);
void func_168 (char* input);
void func_169 (char* input);
void func_170 (char* input);
void func_171 (char* input);
void func_172 (char* input);
void func_173 (char* input);
void func_174 (char* input);
void func_175 (char* input);
void func_176 (char* input);
void func_177 (char* input);
void func_178 (char* input);
void func_179 (char* input);
void func_180 (char* input);
void func_181 (char* input);
void func_182 (char* input);
void func_183 (char* input);
void func_184 (char* input);
void func_185 (char* input);
void func_186 (char* input);
void func_187 (char* input);
void func_188 (char* input);
void func_189 (char* input);
void func_190 (char* input);
void func_191 (char* input);
void func_192 (char* input);
void func_193 (char* input);
void func_194 (char* input);
void func_195 (char* input);
void func_196 (char* input);
void func_197 (char* input);
void func_198 (char* input);
void func_199 (char* input);
void func_200 (char* input);
void func_201 (char* input);
void func_202 (char* input);
void func_203 (char* input);
void func_204 (char* input);
void func_205 (char* input);
void func_206 (char* input);
void func_207 (char* input);
void func_208 (char* input);
void func_209 (char* input);
void func_210 (char* input);
void func_211 (char* input);
void func_212 (char* input);
void func_213 (char* input);
void func_214 (char* input);
void func_215 (char* input);
void func_216 (char* input);
void func_217 (char* input);
void func_218 (char* input);
void func_219 (char* input);
void func_220 (char* input);
void func_221 (char* input);
void func_222 (char* input);
void func_223 (char* input);
void func_224 (char* input);
void func_225 (char* input);
void func_226 (char* input);
void func_227 (char* input);
void func_228 (char* input);
void func_229 (char* input);
void func_230 (char* input);
void func_231 (char* input);
void func_232 (char* input);
void func_233 (char* input);
void func_234 (char* input);
void func_235 (char* input);
void func_236 (char* input);
void func_237 (char* input);
void func_238 (char* input);
void func_239 (char* input);
void func_240 (char* input);
void func_241 (char* input);
void func_242 (char* input);
void func_243 (char* input);
void func_244 (char* input);
void func_245 (char* input);
void func_246 (char* input);
void func_247 (char* input);
void func_248 (char* input);
void func_249 (char* input);
void func_250 (char* input);
void func_251 (char* input);
void func_252 (char* input);
void func_253 (char* input);
void func_254 (char* input);
void func_255 (char* input);
void func_256 (char* input);
void func_257 (char* input);
void func_258 (char* input);
void func_259 (char* input);
void func_260 (char* input);
void func_261 (char* input);
void func_262 (char* input);
void func_263 (char* input);
void func_264 (char* input);
void func_265 (char* input);
void func_266 (char* input);
void func_267 (char* input);
void func_268 (char* input);
void func_269 (char* input);
void func_270 (char* input);
void func_271 (char* input);
void func_272 (char* input);
void func_273 (char* input);
void func_274 (char* input);
void func_275 (char* input);
void func_276 (char* input);
void func_277 (char* input);
void func_278 (char* input);
void func_279 (char* input);
void func_280 (char* input);
void func_281 (char* input);
void func_282 (char* input);
void func_283 (char* input);
void func_284 (char* input);
void func_285 (char* input);
void func_286 (char* input);
void func_287 (char* input);
void func_288 (char* input);
void func_289 (char* input);
void func_290 (char* input);
void func_291 (char* input);
void func_292 (char* input);
void func_293 (char* input);
void func_294 (char* input);
void func_295 (char* input);
void func_296 (char* input);
void func_297 (char* input);
void func_298 (char* input);
void func_299 (char* input);
void func_300 (char* input);
void func_301 (char* input);
void func_302 (char* input);
void func_303 (char* input);
void func_304 (char* input);
void func_305 (char* input);
void func_306 (char* input);
void func_307 (char* input);
void func_308 (char* input);
void func_309 (char* input);
void func_310 (char* input);
void func_311 (char* input);
void func_312 (char* input);
void func_313 (char* input);
void func_314 (char* input);
void func_315 (char* input);
void func_316 (char* input);
void func_317 (char* input);
void func_318 (char* input);
void func_319 (char* input);
void func_320 (char* input);
void func_321 (char* input);
void func_322 (char* input);
void func_323 (char* input);
void func_324 (char* input);
void func_325 (char* input);
void func_326 (char* input);
void func_327 (char* input);
void func_328 (char* input);
void func_329 (char* input);
void func_330 (char* input);
void func_331 (char* input);
void func_332 (char* input);
void func_333 (char* input);
void func_334 (char* input);
void func_335 (char* input);
void func_336 (char* input);
void func_337 (char* input);
void func_338 (char* input);
void func_339 (char* input);
void func_340 (char* input);
void func_341 (char* input);
void func_342 (char* input);
void func_343 (char* input);
void func_344 (char* input);
void func_345 (char* input);
void func_346 (char* input);
void func_347 (char* input);
void func_348 (char* input);
void func_349 (char* input);
void func_350 (char* input);
void func_351 (char* input);
void func_352 (char* input);
void func_353 (char* input);
void func_354 (char* input);
void func_355 (char* input);
void func_356 (char* input);
void func_357 (char* input);
void func_358 (char* input);
void func_359 (char* input);
void func_360 (char* input);
void func_361 (char* input);
void func_362 (char* input);
void func_363 (char* input);
void func_364 (char* input);
void func_365 (char* input);
void func_366 (char* input);
void func_367 (char* input);
void func_368 (char* input);
void func_369 (char* input);
void func_370 (char* input);
void func_371 (char* input);
void func_372 (char* input);
void func_373 (char* input);
void func_374 (char* input);
void func_375 (char* input);
void func_376 (char* input);
void func_377 (char* input);
void func_378 (char* input);
void func_379 (char* input);
void func_380 (char* input);
void func_381 (char* input);
void func_382 (char* input);
void func_383 (char* input);
void func_384 (char* input);
void func_385 (char* input);
void func_386 (char* input);
void func_387 (char* input);
void func_388 (char* input);
void func_389 (char* input);
void func_390 (char* input);
void func_391 (char* input);
void func_392 (char* input);
void func_393 (char* input);
void func_394 (char* input);
void func_395 (char* input);
void func_396 (char* input);
void func_397 (char* input);
void func_398 (char* input);
void func_399 (char* input);
void func_400 (char* input);
void func_401 (char* input);
void func_402 (char* input);
void func_403 (char* input);
void func_404 (char* input);
void func_405 (char* input);
void func_406 (char* input);
void func_407 (char* input);
void func_408 (char* input);
void func_409 (char* input);
void func_410 (char* input);
void func_411 (char* input);
void func_412 (char* input);
void func_413 (char* input);
void func_414 (char* input);
void func_415 (char* input);
void func_416 (char* input);
void func_417 (char* input);
void func_418 (char* input);
void func_419 (char* input);
void func_420 (char* input);
void func_421 (char* input);
void func_422 (char* input);
void func_423 (char* input);
void func_424 (char* input);
void func_425 (char* input);
void func_426 (char* input);
void func_427 (char* input);
void func_428 (char* input);
void func_429 (char* input);
void func_430 (char* input);
void func_431 (char* input);
void func_432 (char* input);
void func_433 (char* input);
void func_434 (char* input);
void func_435 (char* input);
void func_436 (char* input);
void func_437 (char* input);
void func_438 (char* input);
void func_439 (char* input);
void func_440 (char* input);
void func_441 (char* input);
void func_442 (char* input);
void func_443 (char* input);
void func_444 (char* input);
void func_445 (char* input);
void func_446 (char* input);
void func_447 (char* input);
void func_448 (char* input);
void func_449 (char* input);
void func_450 (char* input);
void func_451 (char* input);
void func_452 (char* input);
void func_453 (char* input);
void func_454 (char* input);
void func_455 (char* input);
void func_456 (char* input);
void func_457 (char* input);
void func_458 (char* input);
void func_459 (char* input);
void func_460 (char* input);
void func_461 (char* input);
void func_462 (char* input);
void func_463 (char* input);
void func_464 (char* input);
void func_465 (char* input);
void func_466 (char* input);
void func_467 (char* input);
void func_468 (char* input);
void func_469 (char* input);
void func_470 (char* input);
void func_471 (char* input);
void func_472 (char* input);
void func_473 (char* input);
void func_474 (char* input);
void func_475 (char* input);
void func_476 (char* input);
void func_477 (char* input);
void func_478 (char* input);
void func_479 (char* input);
void func_480 (char* input);
void func_481 (char* input);
void func_482 (char* input);
void func_483 (char* input);
void func_484 (char* input);
void func_485 (char* input);
void func_486 (char* input);
void func_487 (char* input);
void func_488 (char* input);
void func_489 (char* input);
void func_490 (char* input);
void func_491 (char* input);
void func_492 (char* input);
void func_493 (char* input);
void func_494 (char* input);
void func_495 (char* input);
void func_496 (char* input);
void func_497 (char* input);
void func_498 (char* input);
void func_499 (char* input);
void func_500 (char* input);
void func_501 (char* input);
void func_502 (char* input);
void func_503 (char* input);
void func_504 (char* input);
void func_505 (char* input);
void func_506 (char* input);
void func_507 (char* input);
void func_508 (char* input);
void func_509 (char* input);
void func_510 (char* input);
void func_511 (char* input);
void func_512 (char* input);
void func_513 (char* input);
void func_514 (char* input);
void func_515 (char* input);
void func_516 (char* input);
void func_517 (char* input);
void func_518 (char* input);
void func_519 (char* input);
void func_520 (char* input);
void func_521 (char* input);
void func_522 (char* input);
void func_523 (char* input);
void func_524 (char* input);
void func_525 (char* input);
void func_526 (char* input);
void func_527 (char* input);
void func_528 (char* input);
void func_529 (char* input);
void func_530 (char* input);
void func_531 (char* input);
void func_532 (char* input);
void func_533 (char* input);
void func_534 (char* input);
void func_535 (char* input);
void func_536 (char* input);
void func_537 (char* input);
void func_538 (char* input);
void func_539 (char* input);
void func_540 (char* input);
void func_541 (char* input);
void func_542 (char* input);
void func_543 (char* input);
void func_544 (char* input);
void func_545 (char* input);
void func_546 (char* input);
void func_547 (char* input);
void func_548 (char* input);
void func_549 (char* input);
void func_550 (char* input);
void func_551 (char* input);
void func_552 (char* input);
void func_553 (char* input);
void func_554 (char* input);
void func_555 (char* input);
void func_556 (char* input);
void func_557 (char* input);
void func_558 (char* input);
void func_559 (char* input);
void func_560 (char* input);
void func_561 (char* input);
void func_562 (char* input);
void func_563 (char* input);
void func_564 (char* input);
void func_565 (char* input);
void func_566 (char* input);
void func_567 (char* input);
void func_568 (char* input);
void func_569 (char* input);
void func_570 (char* input);
void func_571 (char* input);
void func_572 (char* input);
void func_573 (char* input);
void func_574 (char* input);
void func_575 (char* input);
void func_576 (char* input);
void func_577 (char* input);
void func_578 (char* input);
void func_579 (char* input);
void func_580 (char* input);
void func_581 (char* input);
void func_582 (char* input);
void func_583 (char* input);
void func_584 (char* input);
void func_585 (char* input);
void func_586 (char* input);
void func_587 (char* input);
void func_588 (char* input);
void func_589 (char* input);
void func_590 (char* input);
void func_591 (char* input);
void func_592 (char* input);
void func_593 (char* input);
void func_594 (char* input);
void func_595 (char* input);
void func_596 (char* input);
void func_597 (char* input);
void func_598 (char* input);
void func_599 (char* input);
void func_600 (char* input);
void func_601 (char* input);
void func_602 (char* input);
void func_603 (char* input);
void func_604 (char* input);
void func_605 (char* input);
void func_606 (char* input);
void func_607 (char* input);
void func_608 (char* input);
void func_609 (char* input);
void func_610 (char* input);
void func_611 (char* input);
void func_612 (char* input);
void func_613 (char* input);
void func_614 (char* input);
void func_615 (char* input);
void func_616 (char* input);
void func_617 (char* input);
void func_618 (char* input);
void func_619 (char* input);
void func_620 (char* input);
void func_621 (char* input);
void func_622 (char* input);
void func_623 (char* input);
void func_624 (char* input);
void func_625 (char* input);
void func_626 (char* input);
void func_627 (char* input);
void func_628 (char* input);
void func_629 (char* input);
void func_630 (char* input);
void func_631 (char* input);
void func_632 (char* input);
void func_633 (char* input);
void func_634 (char* input);
void func_635 (char* input);
void func_636 (char* input);
void func_637 (char* input);
void func_638 (char* input);
void func_639 (char* input);
void func_640 (char* input);
void func_641 (char* input);
void func_642 (char* input);
void func_643 (char* input);
void func_644 (char* input);
void func_645 (char* input);
void func_646 (char* input);
void func_647 (char* input);
void func_648 (char* input);
void func_649 (char* input);
void func_650 (char* input);
void func_651 (char* input);
void func_652 (char* input);
void func_653 (char* input);
void func_654 (char* input);
void func_655 (char* input);
void func_656 (char* input);
void func_657 (char* input);
void func_658 (char* input);
void func_659 (char* input);
void func_660 (char* input);
void func_661 (char* input);
void func_662 (char* input);
void func_663 (char* input);
void func_664 (char* input);
void func_665 (char* input);
void func_666 (char* input);
void func_667 (char* input);
void func_668 (char* input);
void func_669 (char* input);
void func_670 (char* input);
void func_671 (char* input);
void func_672 (char* input);
void func_673 (char* input);
void func_674 (char* input);
void func_675 (char* input);
void func_676 (char* input);
void func_677 (char* input);
void func_678 (char* input);
void func_679 (char* input);
void func_680 (char* input);
void func_681 (char* input);
void func_682 (char* input);
void func_683 (char* input);
void func_684 (char* input);
void func_685 (char* input);
void func_686 (char* input);
void func_687 (char* input);
void func_688 (char* input);
void func_689 (char* input);
void func_690 (char* input);
void func_691 (char* input);
void func_692 (char* input);
void func_693 (char* input);
void func_694 (char* input);
void func_695 (char* input);
void func_696 (char* input);
void func_697 (char* input);
void func_698 (char* input);
void func_699 (char* input);
void func_700 (char* input);
void func_701 (char* input);
void func_702 (char* input);
void func_703 (char* input);
void func_704 (char* input);
void func_705 (char* input);
void func_706 (char* input);
void func_707 (char* input);
void func_708 (char* input);
void func_709 (char* input);
void func_710 (char* input);
void func_711 (char* input);
void func_712 (char* input);
void func_713 (char* input);
void func_714 (char* input);
void func_715 (char* input);
void func_716 (char* input);
void func_717 (char* input);
void func_718 (char* input);
void func_719 (char* input);
void func_720 (char* input);
void func_721 (char* input);
void func_722 (char* input);
void func_723 (char* input);
void func_724 (char* input);
void func_725 (char* input);
void func_726 (char* input);
void func_727 (char* input);
void func_728 (char* input);
void func_729 (char* input);
void func_730 (char* input);
void func_731 (char* input);
void func_732 (char* input);
void func_733 (char* input);
void func_734 (char* input);
void func_735 (char* input);
void func_736 (char* input);
void func_737 (char* input);
void func_738 (char* input);
void func_739 (char* input);
void func_740 (char* input);
void func_741 (char* input);
void func_742 (char* input);

/* FUNCTIONS */
void target_3(char* input) {
	/* CRASH HERE!!! */
	printf("yee %c\n", input[4]);
}

void func_1(char* input) {
}

void func_2(char* input) {
}

void func_3(char* input) {
}

void func_4(char* input) {
}

void func_5(char* input) {
}

void func_6(char* input) {
}

void target_2(char* input, int len) {
	if ((input[2] == 'H') && (len > 4)) {target_3(input);}
	if (input[2] == '/') {func_1(input);}
	if (input[2] == 'M') {func_2(input);}
	if (input[2] == '3') {func_3(input);}
	if (input[2] == '}') {func_4(input);}
	if (input[2] == 'R') {func_5(input);}
	if (input[2] == 'B') {func_6(input);}
}

void target_2_alt(char* input, int len) {
	if ((input[2] == 'H') && (len > 4)) {target_3(input);}
	if (input[2] == '/') {func_1(input);}
	if (input[2] == 'M') {func_2(input);}
	if (input[2] == '3') {func_3(input);}
	if (input[2] == '}') {func_4(input);}
	if (input[2] == 'R') {func_5(input);}
	if (input[2] == 'B') {func_6(input);}
}

void func_8(char* input) {
}

void func_9(char* input) {
}

void func_10(char* input) {
}

void func_11(char* input) {
}

void func_12(char* input) {
}

void func_13(char* input) {
}

void func_7(char* input) {
	if (input[2] == '?') {func_8(input);}
	if (input[2] == '*') {func_9(input);}
	if (input[2] == '4') {func_10(input);}
	if (input[2] == '/') {func_11(input);}
	if (input[2] == 'f') {func_12(input);}
	if (input[2] == ' ') {func_13(input);}
}

void func_15(char* input) {
}

void func_16(char* input) {
}

void func_17(char* input) {
}

void func_18(char* input) {
}

void func_19(char* input) {
}

void func_20(char* input) {
}

void func_21(char* input) {
}

void func_22(char* input) {
}

void func_23(char* input) {
}

void func_24(char* input) {
}

void func_25(char* input) {
}

void func_26(char* input) {
}

void func_27(char* input) {
}

void func_28(char* input) {
}

void func_14(char* input) {
	if (input[2] == 'A') {func_15(input);}
	if (input[2] == '9') {func_16(input);}
	if (input[2] == 'J') {func_17(input);}
	if (input[2] == 'N') {func_18(input);}
	if (input[2] == '}') {func_19(input);}
	if (input[2] == '"') {func_20(input);}
	if (input[2] == '=') {func_21(input);}
	if (input[2] == 'G') {func_22(input);}
	if (input[2] == 'Z') {func_23(input);}
	if (input[2] == '@') {func_24(input);}
	if (input[2] == 'O') {func_25(input);}
	if (input[2] == '_') {func_26(input);}
	if (input[2] == 'H') {func_27(input);}
	if (input[2] == 'T') {func_28(input);}
}

void func_30(char* input) {
}

void func_31(char* input) {
}

void func_32(char* input) {
}

void func_33(char* input) {
}

void func_34(char* input) {
}

void func_35(char* input) {
}

void func_36(char* input) {
}

void func_37(char* input) {
}

void func_29(char* input) {
	if (input[2] == ']') {func_30(input);}
	if (input[2] == 'g') {func_31(input);}
	if (input[2] == '5') {func_32(input);}
	if (input[2] == '=') {func_33(input);}
	if (input[2] == 'a') {func_34(input);}
	if (input[2] == 'q') {func_35(input);}
	if (input[2] == 'O') {func_36(input);}
	if (input[2] == '2') {func_37(input);}
}

void func_39(char* input) {
}

void func_40(char* input) {
}

void func_41(char* input) {
}

void func_42(char* input) {
}

void func_43(char* input) {
}

void func_44(char* input) {
}

void func_38(char* input) {
	if (input[2] == 'G') {func_39(input);}
	if (input[2] == 'h') {func_40(input);}
	if (input[2] == '"') {func_41(input);}
	if (input[2] == '[') {func_42(input);}
	if (input[2] == 'D') {func_43(input);}
	if (input[2] == 'T') {func_44(input);}
}

void func_45(char* input) {
}

void func_47(char* input) {
}

void func_48(char* input) {
}

void func_49(char* input) {
}

void func_50(char* input) {
}

void func_51(char* input) {
}

void func_52(char* input) {
}

void func_53(char* input) {
}

void func_54(char* input) {
}

void func_46(char* input) {
	if (input[2] == 'm') {func_47(input);}
	if (input[2] == 'Q') {func_48(input);}
	if (input[2] == 'V') {func_49(input);}
	if (input[2] == 'N') {func_50(input);}
	if (input[2] == 'C') {func_51(input);}
	if (input[2] == 'I') {func_52(input);}
	if (input[2] == '5') {func_53(input);}
	if (input[2] == 'y') {func_54(input);}
}

void func_56(char* input) {
}

void func_57(char* input) {
}

void func_58(char* input) {
}

void func_59(char* input) {
}

void func_60(char* input) {
}

void func_61(char* input) {
}

void func_62(char* input) {
}

void func_63(char* input) {
}

void func_64(char* input) {
}

void func_65(char* input) {
}

void func_66(char* input) {
}

void func_67(char* input) {
}

void func_68(char* input) {
}

void func_55(char* input) {
	if (input[2] == '9') {func_56(input);}
	if (input[2] == 'C') {func_57(input);}
	if (input[2] == ';') {func_58(input);}
	if (input[2] == 'i') {func_59(input);}
	if (input[2] == 'y') {func_60(input);}
	if (input[2] == 'h') {func_61(input);}
	if (input[2] == '|') {func_62(input);}
	if (input[2] == ']') {func_63(input);}
	if (input[2] == 'O') {func_64(input);}
	if (input[2] == '+') {func_65(input);}
	if (input[2] == 'S') {func_66(input);}
	if (input[2] == 'z') {func_67(input);}
	if (input[2] == 't') {func_68(input);}
}

void func_70(char* input) {
}

void func_71(char* input) {
}

void func_72(char* input) {
}

void func_73(char* input) {
}

void func_74(char* input) {
}

void func_69(char* input) {
	if (input[2] == 'm') {func_70(input);}
	if (input[2] == ';') {func_71(input);}
	if (input[2] == 'T') {func_72(input);}
	if (input[2] == 'u') {func_73(input);}
	if (input[2] == 'A') {func_74(input);}
}

void func_75(char* input) {
}

void func_77(char* input) {
}

void func_78(char* input) {
}

void func_79(char* input) {
}

void func_80(char* input) {
}

void func_81(char* input) {
}

void func_82(char* input) {
}

void func_76(char* input) {
	if (input[2] == 'b') {func_77(input);}
	if (input[2] == 'i') {func_78(input);}
	if (input[2] == 'N') {func_79(input);}
	if (input[2] == '.') {func_80(input);}
	if (input[2] == '^') {func_81(input);}
	if (input[2] == '!') {func_82(input);}
}

void func_84(char* input) {
}

void func_85(char* input) {
}

void func_86(char* input) {
}

void func_87(char* input) {
}

void func_88(char* input) {
}

void func_89(char* input) {
}

void func_83(char* input) {
	if (input[2] == 'z') {func_84(input);}
	if (input[2] == '}') {func_85(input);}
	if (input[2] == '=') {func_86(input);}
	if (input[2] == '5') {func_87(input);}
	if (input[2] == 'B') {func_88(input);}
	if (input[2] == '[') {func_89(input);}
}

void func_90(char* input) {
}

void func_91(char* input) {
}

void func_93(char* input) {
}

void func_94(char* input) {
}

void func_95(char* input) {
}

void func_96(char* input) {
}

void func_97(char* input) {
}

void func_98(char* input) {
}

void func_99(char* input) {
}

void func_100(char* input) {
}

void func_101(char* input) {
}

void func_102(char* input) {
}

void func_103(char* input) {
}

void func_104(char* input) {
}

void func_105(char* input) {
}

void func_106(char* input) {
}

void func_107(char* input) {
}

void func_92(char* input) {
	if (input[2] == '%') {func_93(input);}
	if (input[2] == '_') {func_94(input);}
	if (input[2] == 'R') {func_95(input);}
	if (input[2] == '>') {func_96(input);}
	if (input[2] == '9') {func_97(input);}
	if (input[2] == '<') {func_98(input);}
	if (input[2] == 't') {func_99(input);}
	if (input[2] == 'g') {func_100(input);}
	if (input[2] == 'X') {func_101(input);}
	if (input[2] == 's') {func_102(input);}
	if (input[2] == 'M') {func_103(input);}
	if (input[2] == '(') {func_104(input);}
	if (input[2] == '7') {func_105(input);}
	if (input[2] == '1') {func_106(input);}
	if (input[2] == '?') {func_107(input);}
}

void func_109(char* input) {
}

void func_110(char* input) {
}

void func_111(char* input) {
}

void func_112(char* input) {
}

void func_113(char* input) {
}

void func_114(char* input) {
}

void func_115(char* input) {
}

void func_116(char* input) {
}

void func_117(char* input) {
}

void func_118(char* input) {
}

void func_119(char* input) {
}

void func_108(char* input) {
	if (input[2] == 'g') {func_109(input);}
	if (input[2] == 'X') {func_110(input);}
	if (input[2] == 'T') {func_111(input);}
	if (input[2] == '@') {func_112(input);}
	if (input[2] == 'x') {func_113(input);}
	if (input[2] == 'B') {func_114(input);}
	if (input[2] == 'z') {func_115(input);}
	if (input[2] == 'K') {func_116(input);}
	if (input[2] == 'Q') {func_117(input);}
	if (input[2] == '`') {func_118(input);}
	if (input[2] == 'o') {func_119(input);}
}

void target_1(char* input, int len) {
	if (input[1] == 'D') {target_2(input, len);}
	if (input[1] == 'd') {target_2_alt(input, len);}
	if (input[1] == 'n') {func_7(input);}
	if (input[1] == 'G') {func_14(input);}
	if (input[1] == ';') {func_29(input);}
	if (input[1] == 'k') {func_38(input);}
	if (input[1] == '[') {func_45(input);}
	if (input[1] == '7') {func_46(input);}
	if (input[1] == 'I') {func_55(input);}
	if (input[1] == 'J') {func_69(input);}
	if (input[1] == 'Z') {func_75(input);}
	if (input[1] == ' ') {func_76(input);}
	if (input[1] == 'd') {func_83(input);}
	if (input[1] == 'E') {func_90(input);}
	if (input[1] == '}') {func_91(input);}
	if (input[1] == 'C') {func_92(input);}
	if (input[1] == 't') {func_108(input);}
}

void func_122(char* input) {
}

void func_123(char* input) {
}

void func_124(char* input) {
}

void func_125(char* input) {
}

void func_126(char* input) {
}

void func_127(char* input) {
}

void func_121(char* input) {
	if (input[2] == '0') {func_122(input);}
	if (input[2] == 'X') {func_123(input);}
	if (input[2] == 'z') {func_124(input);}
	if (input[2] == '_') {func_125(input);}
	if (input[2] == 'R') {func_126(input);}
	if (input[2] == '^') {func_127(input);}
}

void func_128(char* input) {
}

void func_130(char* input) {
}

void func_131(char* input) {
}

void func_132(char* input) {
}

void func_133(char* input) {
}

void func_134(char* input) {
}

void func_129(char* input) {
	if (input[2] == '8') {func_130(input);}
	if (input[2] == 'K') {func_131(input);}
	if (input[2] == 'j') {func_132(input);}
	if (input[2] == '*') {func_133(input);}
	if (input[2] == 'a') {func_134(input);}
}

void func_136(char* input) {
}

void func_137(char* input) {
}

void func_138(char* input) {
}

void func_139(char* input) {
}

void func_140(char* input) {
}

void func_141(char* input) {
}

void func_142(char* input) {
}

void func_143(char* input) {
}

void func_144(char* input) {
}

void func_145(char* input) {
}

void func_146(char* input) {
}

void func_147(char* input) {
}

void func_148(char* input) {
}

void func_135(char* input) {
	if (input[2] == 'Z') {func_136(input);}
	if (input[2] == '"') {func_137(input);}
	if (input[2] == 'M') {func_138(input);}
	if (input[2] == 'y') {func_139(input);}
	if (input[2] == ',') {func_140(input);}
	if (input[2] == 'f') {func_141(input);}
	if (input[2] == 'U') {func_142(input);}
	if (input[2] == 'Y') {func_143(input);}
	if (input[2] == '@') {func_144(input);}
	if (input[2] == ')') {func_145(input);}
	if (input[2] == 'm') {func_146(input);}
	if (input[2] == '+') {func_147(input);}
	if (input[2] == '&') {func_148(input);}
}

void func_150(char* input) {
}

void func_151(char* input) {
}

void func_152(char* input) {
}

void func_153(char* input) {
}

void func_154(char* input) {
}

void func_155(char* input) {
}

void func_156(char* input) {
}

void func_157(char* input) {
}

void func_158(char* input) {
}

void func_159(char* input) {
}

void func_160(char* input) {
}

void func_161(char* input) {
}

void func_162(char* input) {
}

void func_163(char* input) {
}

void func_149(char* input) {
	if (input[2] == '5') {func_150(input);}
	if (input[2] == 'M') {func_151(input);}
	if (input[2] == '}') {func_152(input);}
	if (input[2] == 'P') {func_153(input);}
	if (input[2] == 'q') {func_154(input);}
	if (input[2] == 'a') {func_155(input);}
	if (input[2] == 'R') {func_156(input);}
	if (input[2] == 'H') {func_157(input);}
	if (input[2] == ' ') {func_158(input);}
	if (input[2] == 'B') {func_159(input);}
	if (input[2] == '_') {func_160(input);}
	if (input[2] == 'S') {func_161(input);}
	if (input[2] == '1') {func_162(input);}
	if (input[2] == 'm') {func_163(input);}
}

void func_120(char* input) {
	if (input[1] == 'o') {func_121(input);}
	if (input[1] == 'w') {func_128(input);}
	if (input[1] == '.') {func_129(input);}
	if (input[1] == '3') {func_135(input);}
	if (input[1] == 'Y') {func_149(input);}
}

void func_166(char* input) {
}

void func_167(char* input) {
}

void func_168(char* input) {
}

void func_169(char* input) {
}

void func_170(char* input) {
}

void func_171(char* input) {
}

void func_172(char* input) {
}

void func_165(char* input) {
	if (input[2] == 'Y') {func_166(input);}
	if (input[2] == '3') {func_167(input);}
	if (input[2] == '`') {func_168(input);}
	if (input[2] == '$') {func_169(input);}
	if (input[2] == 'R') {func_170(input);}
	if (input[2] == 'A') {func_171(input);}
	if (input[2] == ')') {func_172(input);}
}

void func_173(char* input) {
}

void func_174(char* input) {
}

void func_175(char* input) {
}

void func_177(char* input) {
}

void func_178(char* input) {
}

void func_179(char* input) {
}

void func_180(char* input) {
}

void func_181(char* input) {
}

void func_182(char* input) {
}

void func_183(char* input) {
}

void func_184(char* input) {
}

void func_185(char* input) {
}

void func_186(char* input) {
}

void func_187(char* input) {
}

void func_188(char* input) {
}

void func_189(char* input) {
}

void func_190(char* input) {
}

void func_191(char* input) {
}

void func_176(char* input) {
	if (input[2] == '3') {func_177(input);}
	if (input[2] == '"') {func_178(input);}
	if (input[2] == 'p') {func_179(input);}
	if (input[2] == '1') {func_180(input);}
	if (input[2] == 'd') {func_181(input);}
	if (input[2] == 'w') {func_182(input);}
	if (input[2] == '#') {func_183(input);}
	if (input[2] == 'j') {func_184(input);}
	if (input[2] == '|') {func_185(input);}
	if (input[2] == 'U') {func_186(input);}
	if (input[2] == '6') {func_187(input);}
	if (input[2] == 'L') {func_188(input);}
	if (input[2] == '~') {func_189(input);}
	if (input[2] == '9') {func_190(input);}
	if (input[2] == ':') {func_191(input);}
}

void func_193(char* input) {
}

void func_194(char* input) {
}

void func_195(char* input) {
}

void func_196(char* input) {
}

void func_197(char* input) {
}

void func_198(char* input) {
}

void func_199(char* input) {
}

void func_192(char* input) {
	if (input[2] == '_') {func_193(input);}
	if (input[2] == '9') {func_194(input);}
	if (input[2] == 's') {func_195(input);}
	if (input[2] == 'o') {func_196(input);}
	if (input[2] == 'Z') {func_197(input);}
	if (input[2] == '5') {func_198(input);}
	if (input[2] == '>') {func_199(input);}
}

void func_200(char* input) {
}

void func_201(char* input) {
}

void func_203(char* input) {
}

void func_204(char* input) {
}

void func_205(char* input) {
}

void func_206(char* input) {
}

void func_207(char* input) {
}

void func_208(char* input) {
}

void func_202(char* input) {
	if (input[2] == 's') {func_203(input);}
	if (input[2] == 'T') {func_204(input);}
	if (input[2] == 'a') {func_205(input);}
	if (input[2] == 'i') {func_206(input);}
	if (input[2] == ' ') {func_207(input);}
	if (input[2] == 'J') {func_208(input);}
}

void func_209(char* input) {
}

void func_210(char* input) {
}

void func_164(char* input) {
	if (input[1] == '>') {func_165(input);}
	if (input[1] == 'm') {func_173(input);}
	if (input[1] == '1') {func_174(input);}
	if (input[1] == 'q') {func_175(input);}
	if (input[1] == 'Q') {func_176(input);}
	if (input[1] == '|') {func_192(input);}
	if (input[1] == '?') {func_200(input);}
	if (input[1] == 'V') {func_201(input);}
	if (input[1] == ')') {func_202(input);}
	if (input[1] == 'S') {func_209(input);}
	if (input[1] == 'M') {func_210(input);}
}

void func_213(char* input) {
}

void func_214(char* input) {
}

void func_215(char* input) {
}

void func_216(char* input) {
}

void func_217(char* input) {
}

void func_218(char* input) {
}

void func_219(char* input) {
}

void func_220(char* input) {
}

void func_221(char* input) {
}

void func_222(char* input) {
}

void func_223(char* input) {
}

void func_224(char* input) {
}

void func_225(char* input) {
}

void func_212(char* input) {
	if (input[2] == '4') {func_213(input);}
	if (input[2] == '_') {func_214(input);}
	if (input[2] == 'K') {func_215(input);}
	if (input[2] == 't') {func_216(input);}
	if (input[2] == '!') {func_217(input);}
	if (input[2] == '2') {func_218(input);}
	if (input[2] == 'M') {func_219(input);}
	if (input[2] == '*') {func_220(input);}
	if (input[2] == '5') {func_221(input);}
	if (input[2] == 'o') {func_222(input);}
	if (input[2] == 'g') {func_223(input);}
	if (input[2] == 'T') {func_224(input);}
	if (input[2] == 'v') {func_225(input);}
}

void func_227(char* input) {
}

void func_228(char* input) {
}

void func_229(char* input) {
}

void func_230(char* input) {
}

void func_231(char* input) {
}

void func_226(char* input) {
	if (input[2] == '!') {func_227(input);}
	if (input[2] == 'Q') {func_228(input);}
	if (input[2] == 'Y') {func_229(input);}
	if (input[2] == 'b') {func_230(input);}
	if (input[2] == ' ') {func_231(input);}
}

void func_233(char* input) {
}

void func_234(char* input) {
}

void func_235(char* input) {
}

void func_236(char* input) {
}

void func_237(char* input) {
}

void func_238(char* input) {
}

void func_239(char* input) {
}

void func_240(char* input) {
}

void func_241(char* input) {
}

void func_242(char* input) {
}

void func_243(char* input) {
}

void func_232(char* input) {
	if (input[2] == ':') {func_233(input);}
	if (input[2] == '=') {func_234(input);}
	if (input[2] == 'X') {func_235(input);}
	if (input[2] == 'k') {func_236(input);}
	if (input[2] == 'f') {func_237(input);}
	if (input[2] == '2') {func_238(input);}
	if (input[2] == '!') {func_239(input);}
	if (input[2] == '`') {func_240(input);}
	if (input[2] == 'D') {func_241(input);}
	if (input[2] == 'n') {func_242(input);}
	if (input[2] == 'w') {func_243(input);}
}

void func_245(char* input) {
}

void func_246(char* input) {
}

void func_247(char* input) {
}

void func_248(char* input) {
}

void func_249(char* input) {
}

void func_250(char* input) {
}

void func_251(char* input) {
}

void func_252(char* input) {
}

void func_253(char* input) {
}

void func_254(char* input) {
}

void func_244(char* input) {
	if (input[2] == '1') {func_245(input);}
	if (input[2] == '?') {func_246(input);}
	if (input[2] == '7') {func_247(input);}
	if (input[2] == ';') {func_248(input);}
	if (input[2] == 'N') {func_249(input);}
	if (input[2] == ']') {func_250(input);}
	if (input[2] == '!') {func_251(input);}
	if (input[2] == 'l') {func_252(input);}
	if (input[2] == 'c') {func_253(input);}
	if (input[2] == 'j') {func_254(input);}
}

void func_256(char* input) {
}

void func_257(char* input) {
}

void func_258(char* input) {
}

void func_259(char* input) {
}

void func_260(char* input) {
}

void func_255(char* input) {
	if (input[2] == '&') {func_256(input);}
	if (input[2] == 'N') {func_257(input);}
	if (input[2] == 't') {func_258(input);}
	if (input[2] == 'V') {func_259(input);}
	if (input[2] == '=') {func_260(input);}
}

void func_262(char* input) {
}

void func_263(char* input) {
}

void func_264(char* input) {
}

void func_265(char* input) {
}

void func_266(char* input) {
}

void func_267(char* input) {
}

void func_268(char* input) {
}

void func_261(char* input) {
	if (input[2] == 'O') {func_262(input);}
	if (input[2] == 'b') {func_263(input);}
	if (input[2] == 'U') {func_264(input);}
	if (input[2] == ',') {func_265(input);}
	if (input[2] == 'T') {func_266(input);}
	if (input[2] == 'V') {func_267(input);}
	if (input[2] == 'r') {func_268(input);}
}

void func_270(char* input) {
}

void func_271(char* input) {
}

void func_272(char* input) {
}

void func_273(char* input) {
}

void func_274(char* input) {
}

void func_275(char* input) {
}

void func_276(char* input) {
}

void func_277(char* input) {
}

void func_278(char* input) {
}

void func_279(char* input) {
}

void func_280(char* input) {
}

void func_281(char* input) {
}

void func_282(char* input) {
}

void func_283(char* input) {
}

void func_269(char* input) {
	if (input[2] == '>') {func_270(input);}
	if (input[2] == 'k') {func_271(input);}
	if (input[2] == '~') {func_272(input);}
	if (input[2] == 'E') {func_273(input);}
	if (input[2] == ':') {func_274(input);}
	if (input[2] == 'n') {func_275(input);}
	if (input[2] == '*') {func_276(input);}
	if (input[2] == '"') {func_277(input);}
	if (input[2] == 'c') {func_278(input);}
	if (input[2] == 'r') {func_279(input);}
	if (input[2] == '0') {func_280(input);}
	if (input[2] == 'f') {func_281(input);}
	if (input[2] == 'K') {func_282(input);}
	if (input[2] == '6') {func_283(input);}
}

void func_284(char* input) {
}

void func_285(char* input) {
}

void func_287(char* input) {
}

void func_288(char* input) {
}

void func_289(char* input) {
}

void func_290(char* input) {
}

void func_291(char* input) {
}

void func_292(char* input) {
}

void func_293(char* input) {
}

void func_294(char* input) {
}

void func_295(char* input) {
}

void func_296(char* input) {
}

void func_297(char* input) {
}

void func_298(char* input) {
}

void func_286(char* input) {
	if (input[2] == 'w') {func_287(input);}
	if (input[2] == '3') {func_288(input);}
	if (input[2] == '>') {func_289(input);}
	if (input[2] == '0') {func_290(input);}
	if (input[2] == '%') {func_291(input);}
	if (input[2] == '4') {func_292(input);}
	if (input[2] == 'Y') {func_293(input);}
	if (input[2] == 'c') {func_294(input);}
	if (input[2] == 'k') {func_295(input);}
	if (input[2] == 'n') {func_296(input);}
	if (input[2] == 'l') {func_297(input);}
	if (input[2] == '-') {func_298(input);}
}

void func_211(char* input) {
	if (input[1] == 'N') {func_212(input);}
	if (input[1] == '@') {func_226(input);}
	if (input[1] == 'c') {func_232(input);}
	if (input[1] == 'Z') {func_244(input);}
	if (input[1] == '?') {func_255(input);}
	if (input[1] == 'H') {func_261(input);}
	if (input[1] == 'y') {func_269(input);}
	if (input[1] == '/') {func_284(input);}
	if (input[1] == 'M') {func_285(input);}
	if (input[1] == '[') {func_286(input);}
}

void func_299(char* input) {
}

void func_300(char* input) {
}

void func_301(char* input) {
}

void func_304(char* input) {
}

void func_305(char* input) {
}

void func_306(char* input) {
}

void func_307(char* input) {
}

void func_308(char* input) {
}

void func_309(char* input) {
}

void func_310(char* input) {
}

void func_303(char* input) {
	if (input[2] == 'q') {func_304(input);}
	if (input[2] == '?') {func_305(input);}
	if (input[2] == '}') {func_306(input);}
	if (input[2] == '%') {func_307(input);}
	if (input[2] == 'U') {func_308(input);}
	if (input[2] == 'D') {func_309(input);}
	if (input[2] == '=') {func_310(input);}
}

void func_312(char* input) {
}

void func_313(char* input) {
}

void func_314(char* input) {
}

void func_315(char* input) {
}

void func_316(char* input) {
}

void func_317(char* input) {
}

void func_311(char* input) {
	if (input[2] == ':') {func_312(input);}
	if (input[2] == ')') {func_313(input);}
	if (input[2] == 'i') {func_314(input);}
	if (input[2] == '?') {func_315(input);}
	if (input[2] == 'N') {func_316(input);}
	if (input[2] == 'X') {func_317(input);}
}

void func_319(char* input) {
}

void func_320(char* input) {
}

void func_321(char* input) {
}

void func_322(char* input) {
}

void func_323(char* input) {
}

void func_324(char* input) {
}

void func_325(char* input) {
}

void func_326(char* input) {
}

void func_327(char* input) {
}

void func_328(char* input) {
}

void func_329(char* input) {
}

void func_318(char* input) {
	if (input[2] == '&') {func_319(input);}
	if (input[2] == 'N') {func_320(input);}
	if (input[2] == '"') {func_321(input);}
	if (input[2] == 'i') {func_322(input);}
	if (input[2] == 'V') {func_323(input);}
	if (input[2] == 'o') {func_324(input);}
	if (input[2] == 'm') {func_325(input);}
	if (input[2] == 'p') {func_326(input);}
	if (input[2] == 'f') {func_327(input);}
	if (input[2] == 'n') {func_328(input);}
	if (input[2] == 'q') {func_329(input);}
}

void func_331(char* input) {
}

void func_332(char* input) {
}

void func_333(char* input) {
}

void func_334(char* input) {
}

void func_335(char* input) {
}

void func_336(char* input) {
}

void func_337(char* input) {
}

void func_338(char* input) {
}

void func_339(char* input) {
}

void func_340(char* input) {
}

void func_341(char* input) {
}

void func_330(char* input) {
	if (input[2] == 'm') {func_331(input);}
	if (input[2] == 'e') {func_332(input);}
	if (input[2] == '8') {func_333(input);}
	if (input[2] == 'I') {func_334(input);}
	if (input[2] == 'C') {func_335(input);}
	if (input[2] == ']') {func_336(input);}
	if (input[2] == 'L') {func_337(input);}
	if (input[2] == 'j') {func_338(input);}
	if (input[2] == '1') {func_339(input);}
	if (input[2] == '+') {func_340(input);}
	if (input[2] == 'J') {func_341(input);}
}

void func_342(char* input) {
}

void func_344(char* input) {
}

void func_345(char* input) {
}

void func_346(char* input) {
}

void func_347(char* input) {
}

void func_348(char* input) {
}

void func_349(char* input) {
}

void func_350(char* input) {
}

void func_351(char* input) {
}

void func_352(char* input) {
}

void func_353(char* input) {
}

void func_354(char* input) {
}

void func_355(char* input) {
}

void func_356(char* input) {
}

void func_343(char* input) {
	if (input[2] == ':') {func_344(input);}
	if (input[2] == 'W') {func_345(input);}
	if (input[2] == 'v') {func_346(input);}
	if (input[2] == 'Z') {func_347(input);}
	if (input[2] == 'i') {func_348(input);}
	if (input[2] == '{') {func_349(input);}
	if (input[2] == 'M') {func_350(input);}
	if (input[2] == '?') {func_351(input);}
	if (input[2] == '8') {func_352(input);}
	if (input[2] == 'P') {func_353(input);}
	if (input[2] == '%') {func_354(input);}
	if (input[2] == '[') {func_355(input);}
	if (input[2] == '"') {func_356(input);}
}

void func_357(char* input) {
}

void func_358(char* input) {
}

void func_360(char* input) {
}

void func_361(char* input) {
}

void func_362(char* input) {
}

void func_363(char* input) {
}

void func_364(char* input) {
}

void func_365(char* input) {
}

void func_366(char* input) {
}

void func_367(char* input) {
}

void func_368(char* input) {
}

void func_369(char* input) {
}

void func_370(char* input) {
}

void func_371(char* input) {
}

void func_372(char* input) {
}

void func_373(char* input) {
}

void func_359(char* input) {
	if (input[2] == '=') {func_360(input);}
	if (input[2] == 'Z') {func_361(input);}
	if (input[2] == 'C') {func_362(input);}
	if (input[2] == 'h') {func_363(input);}
	if (input[2] == 'b') {func_364(input);}
	if (input[2] == '9') {func_365(input);}
	if (input[2] == ' ') {func_366(input);}
	if (input[2] == '2') {func_367(input);}
	if (input[2] == 'Q') {func_368(input);}
	if (input[2] == '}') {func_369(input);}
	if (input[2] == '+') {func_370(input);}
	if (input[2] == 'q') {func_371(input);}
	if (input[2] == ')') {func_372(input);}
	if (input[2] == 'P') {func_373(input);}
}

void func_375(char* input) {
}

void func_376(char* input) {
}

void func_377(char* input) {
}

void func_378(char* input) {
}

void func_379(char* input) {
}

void func_380(char* input) {
}

void func_381(char* input) {
}

void func_382(char* input) {
}

void func_383(char* input) {
}

void func_384(char* input) {
}

void func_385(char* input) {
}

void func_386(char* input) {
}

void func_387(char* input) {
}

void func_388(char* input) {
}

void func_374(char* input) {
	if (input[2] == '9') {func_375(input);}
	if (input[2] == 'p') {func_376(input);}
	if (input[2] == 'r') {func_377(input);}
	if (input[2] == '$') {func_378(input);}
	if (input[2] == ' ') {func_379(input);}
	if (input[2] == '|') {func_380(input);}
	if (input[2] == '~') {func_381(input);}
	if (input[2] == '`') {func_382(input);}
	if (input[2] == 'z') {func_383(input);}
	if (input[2] == 'H') {func_384(input);}
	if (input[2] == 'd') {func_385(input);}
	if (input[2] == '6') {func_386(input);}
	if (input[2] == '0') {func_387(input);}
	if (input[2] == 't') {func_388(input);}
}

void func_302(char* input) {
	if (input[1] == 'f') {func_303(input);}
	if (input[1] == 'S') {func_311(input);}
	if (input[1] == 'a') {func_318(input);}
	if (input[1] == 'h') {func_330(input);}
	if (input[1] == 'E') {func_342(input);}
	if (input[1] == '[') {func_343(input);}
	if (input[1] == 'Y') {func_357(input);}
	if (input[1] == 'B') {func_358(input);}
	if (input[1] == 'm') {func_359(input);}
	if (input[1] == 'H') {func_374(input);}
}

void func_389(char* input) {
}

void func_392(char* input) {
}

void func_393(char* input) {
}

void func_394(char* input) {
}

void func_395(char* input) {
}

void func_396(char* input) {
}

void func_397(char* input) {
}

void func_398(char* input) {
}

void func_399(char* input) {
}

void func_400(char* input) {
}

void func_401(char* input) {
}

void func_402(char* input) {
}

void func_403(char* input) {
}

void func_404(char* input) {
}

void func_405(char* input) {
}

void func_406(char* input) {
}

void func_391(char* input) {
	if (input[2] == '3') {func_392(input);}
	if (input[2] == '5') {func_393(input);}
	if (input[2] == '7') {func_394(input);}
	if (input[2] == 'Q') {func_395(input);}
	if (input[2] == ';') {func_396(input);}
	if (input[2] == ':') {func_397(input);}
	if (input[2] == 'X') {func_398(input);}
	if (input[2] == 'B') {func_399(input);}
	if (input[2] == '2') {func_400(input);}
	if (input[2] == '9') {func_401(input);}
	if (input[2] == '!') {func_402(input);}
	if (input[2] == '%') {func_403(input);}
	if (input[2] == '|') {func_404(input);}
	if (input[2] == 'U') {func_405(input);}
	if (input[2] == 'g') {func_406(input);}
}

void func_407(char* input) {
}

void func_409(char* input) {
}

void func_410(char* input) {
}

void func_411(char* input) {
}

void func_412(char* input) {
}

void func_413(char* input) {
}

void func_414(char* input) {
}

void func_415(char* input) {
}

void func_408(char* input) {
	if (input[2] == ']') {func_409(input);}
	if (input[2] == '>') {func_410(input);}
	if (input[2] == '^') {func_411(input);}
	if (input[2] == 'h') {func_412(input);}
	if (input[2] == 'V') {func_413(input);}
	if (input[2] == 'S') {func_414(input);}
	if (input[2] == 'Q') {func_415(input);}
}

void func_417(char* input) {
}

void func_418(char* input) {
}

void func_419(char* input) {
}

void func_420(char* input) {
}

void func_421(char* input) {
}

void func_422(char* input) {
}

void func_416(char* input) {
	if (input[2] == 'S') {func_417(input);}
	if (input[2] == 'u') {func_418(input);}
	if (input[2] == 'w') {func_419(input);}
	if (input[2] == '6') {func_420(input);}
	if (input[2] == '+') {func_421(input);}
	if (input[2] == 'l') {func_422(input);}
}

void func_424(char* input) {
}

void func_425(char* input) {
}

void func_426(char* input) {
}

void func_427(char* input) {
}

void func_428(char* input) {
}

void func_429(char* input) {
}

void func_430(char* input) {
}

void func_431(char* input) {
}

void func_432(char* input) {
}

void func_433(char* input) {
}

void func_434(char* input) {
}

void func_423(char* input) {
	if (input[2] == 'W') {func_424(input);}
	if (input[2] == '^') {func_425(input);}
	if (input[2] == '`') {func_426(input);}
	if (input[2] == 'Z') {func_427(input);}
	if (input[2] == '-') {func_428(input);}
	if (input[2] == 'G') {func_429(input);}
	if (input[2] == 'z') {func_430(input);}
	if (input[2] == '2') {func_431(input);}
	if (input[2] == 'u') {func_432(input);}
	if (input[2] == ']') {func_433(input);}
	if (input[2] == ')') {func_434(input);}
}

void func_390(char* input) {
	if (input[1] == '(') {func_391(input);}
	if (input[1] == 'X') {func_407(input);}
	if (input[1] == 'h') {func_408(input);}
	if (input[1] == '!') {func_416(input);}
	if (input[1] == '=') {func_423(input);}
}

void func_437(char* input) {
}

void func_438(char* input) {
}

void func_439(char* input) {
}

void func_440(char* input) {
}

void func_441(char* input) {
}

void func_442(char* input) {
}

void func_443(char* input) {
}

void func_444(char* input) {
}

void func_445(char* input) {
}

void func_446(char* input) {
}

void func_447(char* input) {
}

void func_448(char* input) {
}

void func_449(char* input) {
}

void func_436(char* input) {
	if (input[2] == 'v') {func_437(input);}
	if (input[2] == 'M') {func_438(input);}
	if (input[2] == 'Z') {func_439(input);}
	if (input[2] == 'H') {func_440(input);}
	if (input[2] == '%') {func_441(input);}
	if (input[2] == 'I') {func_442(input);}
	if (input[2] == '`') {func_443(input);}
	if (input[2] == 'i') {func_444(input);}
	if (input[2] == 'w') {func_445(input);}
	if (input[2] == '{') {func_446(input);}
	if (input[2] == '4') {func_447(input);}
	if (input[2] == '*') {func_448(input);}
	if (input[2] == 't') {func_449(input);}
}

void func_451(char* input) {
}

void func_452(char* input) {
}

void func_453(char* input) {
}

void func_454(char* input) {
}

void func_455(char* input) {
}

void func_456(char* input) {
}

void func_457(char* input) {
}

void func_458(char* input) {
}

void func_459(char* input) {
}

void func_460(char* input) {
}

void func_461(char* input) {
}

void func_462(char* input) {
}

void func_463(char* input) {
}

void func_464(char* input) {
}

void func_450(char* input) {
	if (input[2] == 'S') {func_451(input);}
	if (input[2] == 'z') {func_452(input);}
	if (input[2] == 'g') {func_453(input);}
	if (input[2] == 'c') {func_454(input);}
	if (input[2] == '6') {func_455(input);}
	if (input[2] == 'o') {func_456(input);}
	if (input[2] == 'r') {func_457(input);}
	if (input[2] == '[') {func_458(input);}
	if (input[2] == 'i') {func_459(input);}
	if (input[2] == 'a') {func_460(input);}
	if (input[2] == '5') {func_461(input);}
	if (input[2] == 'I') {func_462(input);}
	if (input[2] == 'X') {func_463(input);}
	if (input[2] == '<') {func_464(input);}
}

void func_465(char* input) {
}

void func_466(char* input) {
}

void func_468(char* input) {
}

void func_469(char* input) {
}

void func_470(char* input) {
}

void func_471(char* input) {
}

void func_472(char* input) {
}

void func_473(char* input) {
}

void func_474(char* input) {
}

void func_475(char* input) {
}

void func_476(char* input) {
}

void func_477(char* input) {
}

void func_478(char* input) {
}

void func_479(char* input) {
}

void func_480(char* input) {
}

void func_467(char* input) {
	if (input[2] == '%') {func_468(input);}
	if (input[2] == '&') {func_469(input);}
	if (input[2] == 'h') {func_470(input);}
	if (input[2] == 'M') {func_471(input);}
	if (input[2] == 'Q') {func_472(input);}
	if (input[2] == 'v') {func_473(input);}
	if (input[2] == 'p') {func_474(input);}
	if (input[2] == '/') {func_475(input);}
	if (input[2] == '-') {func_476(input);}
	if (input[2] == ')') {func_477(input);}
	if (input[2] == '"') {func_478(input);}
	if (input[2] == 'y') {func_479(input);}
	if (input[2] == 'g') {func_480(input);}
}

void func_482(char* input) {
}

void func_483(char* input) {
}

void func_484(char* input) {
}

void func_485(char* input) {
}

void func_486(char* input) {
}

void func_487(char* input) {
}

void func_488(char* input) {
}

void func_489(char* input) {
}

void func_481(char* input) {
	if (input[2] == 'U') {func_482(input);}
	if (input[2] == 'N') {func_483(input);}
	if (input[2] == 'A') {func_484(input);}
	if (input[2] == 'K') {func_485(input);}
	if (input[2] == '<') {func_486(input);}
	if (input[2] == 'B') {func_487(input);}
	if (input[2] == 'M') {func_488(input);}
	if (input[2] == 'c') {func_489(input);}
}

void func_491(char* input) {
}

void func_492(char* input) {
}

void func_493(char* input) {
}

void func_494(char* input) {
}

void func_495(char* input) {
}

void func_496(char* input) {
}

void func_497(char* input) {
}

void func_498(char* input) {
}

void func_490(char* input) {
	if (input[2] == ',') {func_491(input);}
	if (input[2] == 'f') {func_492(input);}
	if (input[2] == '5') {func_493(input);}
	if (input[2] == 'E') {func_494(input);}
	if (input[2] == '+') {func_495(input);}
	if (input[2] == 'O') {func_496(input);}
	if (input[2] == '<') {func_497(input);}
	if (input[2] == 'c') {func_498(input);}
}

void func_500(char* input) {
}

void func_501(char* input) {
}

void func_502(char* input) {
}

void func_503(char* input) {
}

void func_504(char* input) {
}

void func_505(char* input) {
}

void func_506(char* input) {
}

void func_507(char* input) {
}

void func_508(char* input) {
}

void func_509(char* input) {
}

void func_510(char* input) {
}

void func_511(char* input) {
}

void func_512(char* input) {
}

void func_513(char* input) {
}

void func_499(char* input) {
	if (input[2] == '%') {func_500(input);}
	if (input[2] == 'W') {func_501(input);}
	if (input[2] == 'e') {func_502(input);}
	if (input[2] == '2') {func_503(input);}
	if (input[2] == '@') {func_504(input);}
	if (input[2] == 'q') {func_505(input);}
	if (input[2] == 'J') {func_506(input);}
	if (input[2] == 'I') {func_507(input);}
	if (input[2] == '9') {func_508(input);}
	if (input[2] == 'l') {func_509(input);}
	if (input[2] == 'B') {func_510(input);}
	if (input[2] == 'f') {func_511(input);}
	if (input[2] == ',') {func_512(input);}
	if (input[2] == '?') {func_513(input);}
}

void func_515(char* input) {
}

void func_516(char* input) {
}

void func_517(char* input) {
}

void func_518(char* input) {
}

void func_519(char* input) {
}

void func_520(char* input) {
}

void func_521(char* input) {
}

void func_522(char* input) {
}

void func_523(char* input) {
}

void func_524(char* input) {
}

void func_525(char* input) {
}

void func_526(char* input) {
}

void func_527(char* input) {
}

void func_514(char* input) {
	if (input[2] == 'I') {func_515(input);}
	if (input[2] == 'N') {func_516(input);}
	if (input[2] == 'v') {func_517(input);}
	if (input[2] == 'O') {func_518(input);}
	if (input[2] == 'j') {func_519(input);}
	if (input[2] == 'F') {func_520(input);}
	if (input[2] == 'T') {func_521(input);}
	if (input[2] == '0') {func_522(input);}
	if (input[2] == 'm') {func_523(input);}
	if (input[2] == '"') {func_524(input);}
	if (input[2] == 'z') {func_525(input);}
	if (input[2] == '/') {func_526(input);}
	if (input[2] == 'H') {func_527(input);}
}

void func_529(char* input) {
}

void func_530(char* input) {
}

void func_531(char* input) {
}

void func_532(char* input) {
}

void func_533(char* input) {
}

void func_534(char* input) {
}

void func_535(char* input) {
}

void func_536(char* input) {
}

void func_537(char* input) {
}

void func_538(char* input) {
}

void func_539(char* input) {
}

void func_540(char* input) {
}

void func_528(char* input) {
	if (input[2] == ' ') {func_529(input);}
	if (input[2] == 'm') {func_530(input);}
	if (input[2] == 'o') {func_531(input);}
	if (input[2] == 'A') {func_532(input);}
	if (input[2] == '#') {func_533(input);}
	if (input[2] == 'X') {func_534(input);}
	if (input[2] == ';') {func_535(input);}
	if (input[2] == 'V') {func_536(input);}
	if (input[2] == 'j') {func_537(input);}
	if (input[2] == '$') {func_538(input);}
	if (input[2] == 'Q') {func_539(input);}
	if (input[2] == 'F') {func_540(input);}
}

void func_435(char* input) {
	if (input[1] == '2') {func_436(input);}
	if (input[1] == ':') {func_450(input);}
	if (input[1] == '}') {func_465(input);}
	if (input[1] == 'b') {func_466(input);}
	if (input[1] == 'p') {func_467(input);}
	if (input[1] == 'T') {func_481(input);}
	if (input[1] == 'l') {func_490(input);}
	if (input[1] == 'z') {func_499(input);}
	if (input[1] == 'O') {func_514(input);}
	if (input[1] == '<') {func_528(input);}
}

void func_541(char* input) {
}

void func_543(char* input) {
}

void func_545(char* input) {
}

void func_546(char* input) {
}

void func_547(char* input) {
}

void func_548(char* input) {
}

void func_549(char* input) {
}

void func_550(char* input) {
}

void func_551(char* input) {
}

void func_552(char* input) {
}

void func_544(char* input) {
	if (input[2] == '<') {func_545(input);}
	if (input[2] == 'e') {func_546(input);}
	if (input[2] == '"') {func_547(input);}
	if (input[2] == 'a') {func_548(input);}
	if (input[2] == 's') {func_549(input);}
	if (input[2] == '>') {func_550(input);}
	if (input[2] == 'D') {func_551(input);}
	if (input[2] == '-') {func_552(input);}
}

void func_553(char* input) {
}

void func_555(char* input) {
}

void func_556(char* input) {
}

void func_557(char* input) {
}

void func_558(char* input) {
}

void func_559(char* input) {
}

void func_560(char* input) {
}

void func_554(char* input) {
	if (input[2] == 'l') {func_555(input);}
	if (input[2] == 'k') {func_556(input);}
	if (input[2] == '_') {func_557(input);}
	if (input[2] == 'z') {func_558(input);}
	if (input[2] == '*') {func_559(input);}
	if (input[2] == 'F') {func_560(input);}
}

void func_562(char* input) {
}

void func_563(char* input) {
}

void func_564(char* input) {
}

void func_565(char* input) {
}

void func_566(char* input) {
}

void func_567(char* input) {
}

void func_568(char* input) {
}

void func_569(char* input) {
}

void func_570(char* input) {
}

void func_571(char* input) {
}

void func_572(char* input) {
}

void func_573(char* input) {
}

void func_574(char* input) {
}

void func_575(char* input) {
}

void func_576(char* input) {
}

void func_561(char* input) {
	if (input[2] == '@') {func_562(input);}
	if (input[2] == 'q') {func_563(input);}
	if (input[2] == '<') {func_564(input);}
	if (input[2] == '^') {func_565(input);}
	if (input[2] == 'N') {func_566(input);}
	if (input[2] == 'W') {func_567(input);}
	if (input[2] == 'n') {func_568(input);}
	if (input[2] == 'X') {func_569(input);}
	if (input[2] == 'm') {func_570(input);}
	if (input[2] == 'h') {func_571(input);}
	if (input[2] == 't') {func_572(input);}
	if (input[2] == 'H') {func_573(input);}
	if (input[2] == 'E') {func_574(input);}
	if (input[2] == '>') {func_575(input);}
	if (input[2] == 'i') {func_576(input);}
}

void func_542(char* input) {
	if (input[1] == 'q') {func_543(input);}
	if (input[1] == ';') {func_544(input);}
	if (input[1] == '-') {func_553(input);}
	if (input[1] == 'H') {func_554(input);}
	if (input[1] == 'w') {func_561(input);}
}

void func_578(char* input) {
}

void func_579(char* input) {
}

void func_581(char* input) {
}

void func_582(char* input) {
}

void func_583(char* input) {
}

void func_584(char* input) {
}

void func_585(char* input) {
}

void func_586(char* input) {
}

void func_587(char* input) {
}

void func_588(char* input) {
}

void func_589(char* input) {
}

void func_590(char* input) {
}

void func_591(char* input) {
}

void func_592(char* input) {
}

void func_593(char* input) {
}

void func_594(char* input) {
}

void func_595(char* input) {
}

void func_580(char* input) {
	if (input[2] == '(') {func_581(input);}
	if (input[2] == 'R') {func_582(input);}
	if (input[2] == '8') {func_583(input);}
	if (input[2] == '*') {func_584(input);}
	if (input[2] == 'E') {func_585(input);}
	if (input[2] == '2') {func_586(input);}
	if (input[2] == ',') {func_587(input);}
	if (input[2] == '?') {func_588(input);}
	if (input[2] == 'I') {func_589(input);}
	if (input[2] == '4') {func_590(input);}
	if (input[2] == 'V') {func_591(input);}
	if (input[2] == 't') {func_592(input);}
	if (input[2] == '%') {func_593(input);}
	if (input[2] == 'K') {func_594(input);}
	if (input[2] == 'S') {func_595(input);}
}

void func_597(char* input) {
}

void func_598(char* input) {
}

void func_599(char* input) {
}

void func_600(char* input) {
}

void func_601(char* input) {
}

void func_602(char* input) {
}

void func_603(char* input) {
}

void func_604(char* input) {
}

void func_605(char* input) {
}

void func_606(char* input) {
}

void func_607(char* input) {
}

void func_608(char* input) {
}

void func_609(char* input) {
}

void func_596(char* input) {
	if (input[2] == 'E') {func_597(input);}
	if (input[2] == '5') {func_598(input);}
	if (input[2] == 'u') {func_599(input);}
	if (input[2] == '1') {func_600(input);}
	if (input[2] == '4') {func_601(input);}
	if (input[2] == '!') {func_602(input);}
	if (input[2] == 'b') {func_603(input);}
	if (input[2] == 'G') {func_604(input);}
	if (input[2] == 'n') {func_605(input);}
	if (input[2] == 'P') {func_606(input);}
	if (input[2] == 'C') {func_607(input);}
	if (input[2] == 'a') {func_608(input);}
	if (input[2] == '/') {func_609(input);}
}

void func_611(char* input) {
}

void func_612(char* input) {
}

void func_613(char* input) {
}

void func_614(char* input) {
}

void func_615(char* input) {
}

void func_616(char* input) {
}

void func_617(char* input) {
}

void func_618(char* input) {
}

void func_619(char* input) {
}

void func_620(char* input) {
}

void func_610(char* input) {
	if (input[2] == '3') {func_611(input);}
	if (input[2] == 'A') {func_612(input);}
	if (input[2] == 'O') {func_613(input);}
	if (input[2] == 'N') {func_614(input);}
	if (input[2] == '*') {func_615(input);}
	if (input[2] == ',') {func_616(input);}
	if (input[2] == 'h') {func_617(input);}
	if (input[2] == '%') {func_618(input);}
	if (input[2] == 'C') {func_619(input);}
	if (input[2] == '8') {func_620(input);}
}

void func_622(char* input) {
}

void func_623(char* input) {
}

void func_624(char* input) {
}

void func_625(char* input) {
}

void func_626(char* input) {
}

void func_621(char* input) {
	if (input[2] == 'Z') {func_622(input);}
	if (input[2] == 'A') {func_623(input);}
	if (input[2] == 'E') {func_624(input);}
	if (input[2] == 'l') {func_625(input);}
	if (input[2] == ':') {func_626(input);}
}

void func_628(char* input) {
}

void func_629(char* input) {
}

void func_630(char* input) {
}

void func_631(char* input) {
}

void func_632(char* input) {
}

void func_633(char* input) {
}

void func_634(char* input) {
}

void func_635(char* input) {
}

void func_636(char* input) {
}

void func_637(char* input) {
}

void func_638(char* input) {
}

void func_639(char* input) {
}

void func_640(char* input) {
}

void func_627(char* input) {
	if (input[2] == 'Z') {func_628(input);}
	if (input[2] == 'o') {func_629(input);}
	if (input[2] == '.') {func_630(input);}
	if (input[2] == 'b') {func_631(input);}
	if (input[2] == '1') {func_632(input);}
	if (input[2] == '?') {func_633(input);}
	if (input[2] == 'C') {func_634(input);}
	if (input[2] == 'Y') {func_635(input);}
	if (input[2] == 'f') {func_636(input);}
	if (input[2] == 'A') {func_637(input);}
	if (input[2] == ']') {func_638(input);}
	if (input[2] == 'E') {func_639(input);}
	if (input[2] == '4') {func_640(input);}
}

void func_641(char* input) {
}

void func_643(char* input) {
}

void func_644(char* input) {
}

void func_645(char* input) {
}

void func_646(char* input) {
}

void func_647(char* input) {
}

void func_642(char* input) {
	if (input[2] == 'X') {func_643(input);}
	if (input[2] == 'h') {func_644(input);}
	if (input[2] == 'i') {func_645(input);}
	if (input[2] == 'u') {func_646(input);}
	if (input[2] == 'w') {func_647(input);}
}

void func_648(char* input) {
}

void func_577(char* input) {
	if (input[1] == 'p') {func_578(input);}
	if (input[1] == '9') {func_579(input);}
	if (input[1] == 'S') {func_580(input);}
	if (input[1] == 'V') {func_596(input);}
	if (input[1] == 'b') {func_610(input);}
	if (input[1] == 's') {func_621(input);}
	if (input[1] == '2') {func_627(input);}
	if (input[1] == 'L') {func_641(input);}
	if (input[1] == 'h') {func_642(input);}
	if (input[1] == '&') {func_648(input);}
}

void func_649(char* input) {
}

void func_651(char* input) {
}

void func_653(char* input) {
}

void func_654(char* input) {
}

void func_655(char* input) {
}

void func_656(char* input) {
}

void func_657(char* input) {
}

void func_658(char* input) {
}

void func_659(char* input) {
}

void func_652(char* input) {
	if (input[2] == 'a') {func_653(input);}
	if (input[2] == 'y') {func_654(input);}
	if (input[2] == 'p') {func_655(input);}
	if (input[2] == 'x') {func_656(input);}
	if (input[2] == '|') {func_657(input);}
	if (input[2] == 'D') {func_658(input);}
	if (input[2] == 'O') {func_659(input);}
}

void func_660(char* input) {
}

void func_662(char* input) {
}

void func_663(char* input) {
}

void func_664(char* input) {
}

void func_665(char* input) {
}

void func_666(char* input) {
}

void func_667(char* input) {
}

void func_668(char* input) {
}

void func_669(char* input) {
}

void func_661(char* input) {
	if (input[2] == 'U') {func_662(input);}
	if (input[2] == '`') {func_663(input);}
	if (input[2] == '(') {func_664(input);}
	if (input[2] == '@') {func_665(input);}
	if (input[2] == 'Y') {func_666(input);}
	if (input[2] == 'o') {func_667(input);}
	if (input[2] == 'W') {func_668(input);}
	if (input[2] == ';') {func_669(input);}
}

void func_670(char* input) {
}

void func_672(char* input) {
}

void func_673(char* input) {
}

void func_674(char* input) {
}

void func_675(char* input) {
}

void func_676(char* input) {
}

void func_677(char* input) {
}

void func_678(char* input) {
}

void func_679(char* input) {
}

void func_680(char* input) {
}

void func_681(char* input) {
}

void func_682(char* input) {
}

void func_671(char* input) {
	if (input[2] == 'K') {func_672(input);}
	if (input[2] == 'X') {func_673(input);}
	if (input[2] == '~') {func_674(input);}
	if (input[2] == 'a') {func_675(input);}
	if (input[2] == '*') {func_676(input);}
	if (input[2] == ':') {func_677(input);}
	if (input[2] == 'b') {func_678(input);}
	if (input[2] == '|') {func_679(input);}
	if (input[2] == 'G') {func_680(input);}
	if (input[2] == 'u') {func_681(input);}
	if (input[2] == 'H') {func_682(input);}
}

void func_684(char* input) {
}

void func_685(char* input) {
}

void func_686(char* input) {
}

void func_687(char* input) {
}

void func_688(char* input) {
}

void func_689(char* input) {
}

void func_690(char* input) {
}

void func_691(char* input) {
}

void func_692(char* input) {
}

void func_683(char* input) {
	if (input[2] == '$') {func_684(input);}
	if (input[2] == '3') {func_685(input);}
	if (input[2] == '[') {func_686(input);}
	if (input[2] == 'Z') {func_687(input);}
	if (input[2] == '`') {func_688(input);}
	if (input[2] == '}') {func_689(input);}
	if (input[2] == 'y') {func_690(input);}
	if (input[2] == 'n') {func_691(input);}
	if (input[2] == ',') {func_692(input);}
}

void func_693(char* input) {
}

void func_695(char* input) {
}

void func_696(char* input) {
}

void func_697(char* input) {
}

void func_698(char* input) {
}

void func_699(char* input) {
}

void func_700(char* input) {
}

void func_701(char* input) {
}

void func_702(char* input) {
}

void func_703(char* input) {
}

void func_704(char* input) {
}

void func_705(char* input) {
}

void func_706(char* input) {
}

void func_707(char* input) {
}

void func_708(char* input) {
}

void func_694(char* input) {
	if (input[2] == '"') {func_695(input);}
	if (input[2] == '`') {func_696(input);}
	if (input[2] == 'P') {func_697(input);}
	if (input[2] == 'Z') {func_698(input);}
	if (input[2] == 'u') {func_699(input);}
	if (input[2] == 'q') {func_700(input);}
	if (input[2] == '5') {func_701(input);}
	if (input[2] == '$') {func_702(input);}
	if (input[2] == 'D') {func_703(input);}
	if (input[2] == '4') {func_704(input);}
	if (input[2] == 'e') {func_705(input);}
	if (input[2] == '6') {func_706(input);}
	if (input[2] == 'r') {func_707(input);}
	if (input[2] == '~') {func_708(input);}
}

void func_710(char* input) {
}

void func_711(char* input) {
}

void func_712(char* input) {
}

void func_713(char* input) {
}

void func_714(char* input) {
}

void func_715(char* input) {
}

void func_716(char* input) {
}

void func_709(char* input) {
	if (input[2] == '.') {func_710(input);}
	if (input[2] == '&') {func_711(input);}
	if (input[2] == 'c') {func_712(input);}
	if (input[2] == 'H') {func_713(input);}
	if (input[2] == ';') {func_714(input);}
	if (input[2] == 't') {func_715(input);}
	if (input[2] == 'l') {func_716(input);}
}

void func_717(char* input) {
}

void func_719(char* input) {
}

void func_720(char* input) {
}

void func_721(char* input) {
}

void func_722(char* input) {
}

void func_723(char* input) {
}

void func_724(char* input) {
}

void func_725(char* input) {
}

void func_726(char* input) {
}

void func_727(char* input) {
}

void func_728(char* input) {
}

void func_718(char* input) {
	if (input[2] == '$') {func_719(input);}
	if (input[2] == '7') {func_720(input);}
	if (input[2] == 'u') {func_721(input);}
	if (input[2] == 'q') {func_722(input);}
	if (input[2] == '(') {func_723(input);}
	if (input[2] == 'c') {func_724(input);}
	if (input[2] == '%') {func_725(input);}
	if (input[2] == 'X') {func_726(input);}
	if (input[2] == 'U') {func_727(input);}
	if (input[2] == '{') {func_728(input);}
}

void func_730(char* input) {
}

void func_731(char* input) {
}

void func_732(char* input) {
}

void func_733(char* input) {
}

void func_734(char* input) {
}

void func_735(char* input) {
}

void func_736(char* input) {
}

void func_737(char* input) {
}

void func_738(char* input) {
}

void func_739(char* input) {
}

void func_740(char* input) {
}

void func_741(char* input) {
}

void func_729(char* input) {
	if (input[2] == '&') {func_730(input);}
	if (input[2] == 'Z') {func_731(input);}
	if (input[2] == 'm') {func_732(input);}
	if (input[2] == '%') {func_733(input);}
	if (input[2] == 'q') {func_734(input);}
	if (input[2] == 'G') {func_735(input);}
	if (input[2] == 'T') {func_736(input);}
	if (input[2] == 'R') {func_737(input);}
	if (input[2] == 'h') {func_738(input);}
	if (input[2] == 'F') {func_739(input);}
	if (input[2] == '~') {func_740(input);}
	if (input[2] == ':') {func_741(input);}
}

void func_742(char* input) {
}

void func_650(char* input) {
	if (input[1] == 's') {func_651(input);}
	if (input[1] == 'I') {func_652(input);}
	if (input[1] == 'h') {func_660(input);}
	if (input[1] == 'Y') {func_661(input);}
	if (input[1] == ',') {func_670(input);}
	if (input[1] == 'H') {func_671(input);}
	if (input[1] == '?') {func_683(input);}
	if (input[1] == '+') {func_693(input);}
	if (input[1] == '@') {func_694(input);}
	if (input[1] == '6') {func_709(input);}
	if (input[1] == '}') {func_717(input);}
	if (input[1] == '_') {func_718(input);}
	if (input[1] == 'g') {func_729(input);}
	if (input[1] == 'o') {func_742(input);}
}

#define BUFF_SIZE 256
int main(int argc, char** argv) {
	char input_buff[BUFF_SIZE];
	size_t input_len = read(STDIN_FILENO, input_buff, BUFF_SIZE);

	if (input_len < 3) return 0; // make sure no other memory problems happen

	char* input = malloc(input_len);
	memcpy(input, input_buff, input_len);

	printf("len: %ld", input_len);

	if (input[0] == '0') {target_1(input, input_len);}
	if (input[0] == 'd') {func_120(input);}
	if (input[0] == 'N') {func_164(input);}
	if (input[0] == '~') {func_211(input);}
	if (input[0] == 'y') {func_299(input);}
	if (input[0] == 'Y') {func_300(input);}
	if (input[0] == '`') {func_301(input);}
	if (input[0] == 'M') {func_302(input);}
	if (input[0] == 'b') {func_389(input);}
	if (input[0] == '}') {func_390(input);}
	if (input[0] == 'g') {func_435(input);}
	if (input[0] == 'Z') {func_541(input);}
	if (input[0] == 'I') {func_542(input);}
	if (input[0] == '%') {func_577(input);}
	if (input[0] == 'R') {func_649(input);}
	if (input[0] == 'G') {func_650(input);}

	free(input);

	return 0;
}

