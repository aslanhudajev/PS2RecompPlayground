#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _kDebugException
// Address: 0x137880 - 0x13799c
void _kDebugException_0x137880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_kDebugException_0x137880");
#endif

    ctx->pc = 0x137880u;

label_137880:
    // 0x137880: 0x3c1a0024  lui         $k0, 0x24
    ctx->pc = 0x137880u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)36 << 16));
label_137884:
    // 0x137884: 0x275a7440  addiu       $k0, $k0, 0x7440
    ctx->pc = 0x137884u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 29760));
label_137888:
    // 0x137888: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x137888u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_13788c:
    // 0x13788c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x13788cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_137890:
    // 0x137890: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x137890u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_137894:
    // 0x137894: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x137894u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_137898:
    // 0x137898: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x137898u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_13789c:
    // 0x13789c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x13789cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1378a0:
    // 0x1378a0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1378a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1378a4:
    // 0x1378a4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1378a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1378a8:
    // 0x1378a8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1378a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1378ac:
    // 0x1378ac: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1378acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1378b0:
    // 0x1378b0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1378b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1378b4:
    // 0x1378b4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1378b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1378b8:
    // 0x1378b8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1378b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1378bc:
    // 0x1378bc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1378bcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1378c0:
    // 0x1378c0: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1378c0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1378c4:
    // 0x1378c4: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1378c4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1378c8:
    // 0x1378c8: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1378c8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1378cc:
    // 0x1378cc: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1378ccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1378d0:
    // 0x1378d0: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1378d0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1378d4:
    // 0x1378d4: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1378d4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1378d8:
    // 0x1378d8: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1378d8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1378dc:
    // 0x1378dc: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1378dcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1378e0:
    // 0x1378e0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1378e0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1378e4:
    // 0x1378e4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1378e4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1378e8:
    // 0x1378e8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1378e8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1378ec:
    // 0x1378ec: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1378ecu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1378f0:
    // 0x1378f0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1378f0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1378f4:
    // 0x1378f4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1378f4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1378f8:
    // 0x1378f8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1378f8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1378fc:
    // 0x1378fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1378fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_137900:
    // 0x137900: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x137900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_137904:
    // 0x137904: 0xfc227640  sd          $v0, 0x7640($at)
    ctx->pc = 0x137904u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30272), GPR_U64(ctx, 2));
label_137908:
    // 0x137908: 0x70001010  mfhi1       $v0
    ctx->pc = 0x137908u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_13790c:
    // 0x13790c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x13790cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_137910:
    // 0x137910: 0xfc227648  sd          $v0, 0x7648($at)
    ctx->pc = 0x137910u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30280), GPR_U64(ctx, 2));
label_137914:
    // 0x137914: 0x1012  mflo        $v0
    ctx->pc = 0x137914u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_137918:
    // 0x137918: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x137918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_13791c:
    // 0x13791c: 0xfc227650  sd          $v0, 0x7650($at)
    ctx->pc = 0x13791cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30288), GPR_U64(ctx, 2));
label_137920:
    // 0x137920: 0x70001012  mflo1       $v0
    ctx->pc = 0x137920u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_137924:
    // 0x137924: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x137924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_137928:
    // 0x137928: 0xfc227658  sd          $v0, 0x7658($at)
    ctx->pc = 0x137928u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30296), GPR_U64(ctx, 2));
label_13792c:
    // 0x13792c: 0x1028  mfsa        $v0
    ctx->pc = 0x13792cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_137930:
    // 0x137930: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x137930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_137934:
    // 0x137934: 0xfc227660  sd          $v0, 0x7660($at)
    ctx->pc = 0x137934u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30304), GPR_U64(ctx, 2));
label_137938:
    // 0x137938: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x137938u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_13793c:
    // 0x13793c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x13793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_137940:
    // 0x137940: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x137940u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_137944:
    // 0x137944: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x137944u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_137948:
    // 0x137948: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x137948u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_13794c:
    // 0x13794c: 0x3c090024  lui         $t1, 0x24
    ctx->pc = 0x13794cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)36 << 16));
label_137950:
    // 0x137950: 0x25297440  addiu       $t1, $t1, 0x7440
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29760));
label_137954:
    // 0x137954: 0x3c010013  lui         $at, 0x13
    ctx->pc = 0x137954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19 << 16));
label_137958:
    // 0x137958: 0x2421797c  addiu       $at, $at, 0x797C
    ctx->pc = 0x137958u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31100));
label_13795c:
    // 0x13795c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x13795cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_137960:
    // 0x137960: 0x40f  sync.p
    ctx->pc = 0x137960u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_137964:
    // 0x137964: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x137964u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_137968:
    // 0x137968: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_13796c:
    // 0x13796c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x13796cu;
    SET_GPR_VEC(ctx, 1, PS2_PAND(GPR_VEC(ctx, 1), GPR_VEC(ctx, 2)));
label_137970:
    // 0x137970: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x137970u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_137974:
    // 0x137974: 0x40f  sync.p
    ctx->pc = 0x137974u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_137978:
    // 0x137978: 0x42000018  eret
    ctx->pc = 0x137978u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_13797c:
    // 0x13797c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x13797cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)124u)));
label_137980:
    // 0x137980: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x137980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_137984:
    // 0x137984: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_137988:
    // 0x137988: 0x8c210800  lw          $at, 0x800($at)
    ctx->pc = 0x137988u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2048)));
label_13798c:
    // 0x13798c: 0x3c1d0024  lui         $sp, 0x24
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)36 << 16));
label_137990:
    // 0x137990: 0x20f809  jalr        $at
label_137994:
    if (ctx->pc == 0x137994u) {
        ctx->pc = 0x137994u;
            // 0x137994: 0x27bd7440  addiu       $sp, $sp, 0x7440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 29760));
        ctx->pc = 0x137998u;
        goto label_137998;
    }
    ctx->pc = 0x137990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x137998u);
        ctx->pc = 0x137994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137990u;
            // 0x137994: 0x27bd7440  addiu       $sp, $sp, 0x7440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 29760));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137880u: goto label_137880;
            case 0x137884u: goto label_137884;
            case 0x137888u: goto label_137888;
            case 0x13788Cu: goto label_13788c;
            case 0x137890u: goto label_137890;
            case 0x137894u: goto label_137894;
            case 0x137898u: goto label_137898;
            case 0x13789Cu: goto label_13789c;
            case 0x1378A0u: goto label_1378a0;
            case 0x1378A4u: goto label_1378a4;
            case 0x1378A8u: goto label_1378a8;
            case 0x1378ACu: goto label_1378ac;
            case 0x1378B0u: goto label_1378b0;
            case 0x1378B4u: goto label_1378b4;
            case 0x1378B8u: goto label_1378b8;
            case 0x1378BCu: goto label_1378bc;
            case 0x1378C0u: goto label_1378c0;
            case 0x1378C4u: goto label_1378c4;
            case 0x1378C8u: goto label_1378c8;
            case 0x1378CCu: goto label_1378cc;
            case 0x1378D0u: goto label_1378d0;
            case 0x1378D4u: goto label_1378d4;
            case 0x1378D8u: goto label_1378d8;
            case 0x1378DCu: goto label_1378dc;
            case 0x1378E0u: goto label_1378e0;
            case 0x1378E4u: goto label_1378e4;
            case 0x1378E8u: goto label_1378e8;
            case 0x1378ECu: goto label_1378ec;
            case 0x1378F0u: goto label_1378f0;
            case 0x1378F4u: goto label_1378f4;
            case 0x1378F8u: goto label_1378f8;
            case 0x1378FCu: goto label_1378fc;
            case 0x137900u: goto label_137900;
            case 0x137904u: goto label_137904;
            case 0x137908u: goto label_137908;
            case 0x13790Cu: goto label_13790c;
            case 0x137910u: goto label_137910;
            case 0x137914u: goto label_137914;
            case 0x137918u: goto label_137918;
            case 0x13791Cu: goto label_13791c;
            case 0x137920u: goto label_137920;
            case 0x137924u: goto label_137924;
            case 0x137928u: goto label_137928;
            case 0x13792Cu: goto label_13792c;
            case 0x137930u: goto label_137930;
            case 0x137934u: goto label_137934;
            case 0x137938u: goto label_137938;
            case 0x13793Cu: goto label_13793c;
            case 0x137940u: goto label_137940;
            case 0x137944u: goto label_137944;
            case 0x137948u: goto label_137948;
            case 0x13794Cu: goto label_13794c;
            case 0x137950u: goto label_137950;
            case 0x137954u: goto label_137954;
            case 0x137958u: goto label_137958;
            case 0x13795Cu: goto label_13795c;
            case 0x137960u: goto label_137960;
            case 0x137964u: goto label_137964;
            case 0x137968u: goto label_137968;
            case 0x13796Cu: goto label_13796c;
            case 0x137970u: goto label_137970;
            case 0x137974u: goto label_137974;
            case 0x137978u: goto label_137978;
            case 0x13797Cu: goto label_13797c;
            case 0x137980u: goto label_137980;
            case 0x137984u: goto label_137984;
            case 0x137988u: goto label_137988;
            case 0x13798Cu: goto label_13798c;
            case 0x137990u: goto label_137990;
            case 0x137994u: goto label_137994;
            case 0x137998u: goto label_137998;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x137998u; }
            if (ctx->pc != 0x137998u) { return; }
        }
    }
    ctx->pc = 0x137998u;
label_137998:
    // 0x137998: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x137998u;
    runtime->handleBreak(rdram, ctx);
}
