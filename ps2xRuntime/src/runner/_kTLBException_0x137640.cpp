#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _kTLBException
// Address: 0x137640 - 0x13775c
void _kTLBException_0x137640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_kTLBException_0x137640");
#endif

    ctx->pc = 0x137640u;

label_137640:
    // 0x137640: 0x3c1a0024  lui         $k0, 0x24
    ctx->pc = 0x137640u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)36 << 16));
label_137644:
    // 0x137644: 0x275a7440  addiu       $k0, $k0, 0x7440
    ctx->pc = 0x137644u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 29760));
label_137648:
    // 0x137648: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x137648u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_13764c:
    // 0x13764c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x13764cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_137650:
    // 0x137650: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x137650u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_137654:
    // 0x137654: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x137654u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_137658:
    // 0x137658: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x137658u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_13765c:
    // 0x13765c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x13765cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_137660:
    // 0x137660: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x137660u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_137664:
    // 0x137664: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x137664u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_137668:
    // 0x137668: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x137668u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_13766c:
    // 0x13766c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x13766cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_137670:
    // 0x137670: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x137670u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_137674:
    // 0x137674: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x137674u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_137678:
    // 0x137678: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x137678u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_13767c:
    // 0x13767c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x13767cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_137680:
    // 0x137680: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x137680u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_137684:
    // 0x137684: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x137684u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_137688:
    // 0x137688: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x137688u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_13768c:
    // 0x13768c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x13768cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_137690:
    // 0x137690: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x137690u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_137694:
    // 0x137694: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x137694u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_137698:
    // 0x137698: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x137698u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_13769c:
    // 0x13769c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x13769cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1376a0:
    // 0x1376a0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1376a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1376a4:
    // 0x1376a4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1376a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1376a8:
    // 0x1376a8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1376a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1376ac:
    // 0x1376ac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1376acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1376b0:
    // 0x1376b0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1376b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1376b4:
    // 0x1376b4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1376b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1376b8:
    // 0x1376b8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1376b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1376bc:
    // 0x1376bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1376bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1376c0:
    // 0x1376c0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1376c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_1376c4:
    // 0x1376c4: 0xfc227640  sd          $v0, 0x7640($at)
    ctx->pc = 0x1376c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30272), GPR_U64(ctx, 2));
label_1376c8:
    // 0x1376c8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1376c8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1376cc:
    // 0x1376cc: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1376ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_1376d0:
    // 0x1376d0: 0xfc227648  sd          $v0, 0x7648($at)
    ctx->pc = 0x1376d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30280), GPR_U64(ctx, 2));
label_1376d4:
    // 0x1376d4: 0x1012  mflo        $v0
    ctx->pc = 0x1376d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1376d8:
    // 0x1376d8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_1376dc:
    // 0x1376dc: 0xfc227650  sd          $v0, 0x7650($at)
    ctx->pc = 0x1376dcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30288), GPR_U64(ctx, 2));
label_1376e0:
    // 0x1376e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1376e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1376e4:
    // 0x1376e4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_1376e8:
    // 0x1376e8: 0xfc227658  sd          $v0, 0x7658($at)
    ctx->pc = 0x1376e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30296), GPR_U64(ctx, 2));
label_1376ec:
    // 0x1376ec: 0x1028  mfsa        $v0
    ctx->pc = 0x1376ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1376f0:
    // 0x1376f0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1376f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_1376f4:
    // 0x1376f4: 0xfc227660  sd          $v0, 0x7660($at)
    ctx->pc = 0x1376f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30304), GPR_U64(ctx, 2));
label_1376f8:
    // 0x1376f8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1376f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1376fc:
    // 0x1376fc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1376fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_137700:
    // 0x137700: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x137700u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_137704:
    // 0x137704: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x137704u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_137708:
    // 0x137708: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x137708u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
label_13770c:
    // 0x13770c: 0x25087440  addiu       $t0, $t0, 0x7440
    ctx->pc = 0x13770cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29760));
label_137710:
    // 0x137710: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x137710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
label_137714:
    // 0x137714: 0xac267668  sw          $a2, 0x7668($at)
    ctx->pc = 0x137714u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30312), GPR_U32(ctx, 6));
label_137718:
    // 0x137718: 0x3c010013  lui         $at, 0x13
    ctx->pc = 0x137718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19 << 16));
label_13771c:
    // 0x13771c: 0x24217740  addiu       $at, $at, 0x7740
    ctx->pc = 0x13771cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30528));
label_137720:
    // 0x137720: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x137720u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_137724:
    // 0x137724: 0x40f  sync.p
    ctx->pc = 0x137724u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_137728:
    // 0x137728: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x137728u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_13772c:
    // 0x13772c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_137730:
    // 0x137730: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x137730u;
    SET_GPR_VEC(ctx, 1, PS2_PAND(GPR_VEC(ctx, 1), GPR_VEC(ctx, 2)));
label_137734:
    // 0x137734: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x137734u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_137738:
    // 0x137738: 0x40f  sync.p
    ctx->pc = 0x137738u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_13773c:
    // 0x13773c: 0x42000018  eret
    ctx->pc = 0x13773cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_137740:
    // 0x137740: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x137740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_137744:
    // 0x137744: 0x8c2107f8  lw          $at, 0x7F8($at)
    ctx->pc = 0x137744u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2040)));
label_137748:
    // 0x137748: 0x3c1d0024  lui         $sp, 0x24
    ctx->pc = 0x137748u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)36 << 16));
label_13774c:
    // 0x13774c: 0x20f809  jalr        $at
label_137750:
    if (ctx->pc == 0x137750u) {
        ctx->pc = 0x137750u;
            // 0x137750: 0x27bd7440  addiu       $sp, $sp, 0x7440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 29760));
        ctx->pc = 0x137754u;
        goto label_137754;
    }
    ctx->pc = 0x13774Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x137754u);
        ctx->pc = 0x137750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13774Cu;
            // 0x137750: 0x27bd7440  addiu       $sp, $sp, 0x7440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 29760));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137640u: goto label_137640;
            case 0x137644u: goto label_137644;
            case 0x137648u: goto label_137648;
            case 0x13764Cu: goto label_13764c;
            case 0x137650u: goto label_137650;
            case 0x137654u: goto label_137654;
            case 0x137658u: goto label_137658;
            case 0x13765Cu: goto label_13765c;
            case 0x137660u: goto label_137660;
            case 0x137664u: goto label_137664;
            case 0x137668u: goto label_137668;
            case 0x13766Cu: goto label_13766c;
            case 0x137670u: goto label_137670;
            case 0x137674u: goto label_137674;
            case 0x137678u: goto label_137678;
            case 0x13767Cu: goto label_13767c;
            case 0x137680u: goto label_137680;
            case 0x137684u: goto label_137684;
            case 0x137688u: goto label_137688;
            case 0x13768Cu: goto label_13768c;
            case 0x137690u: goto label_137690;
            case 0x137694u: goto label_137694;
            case 0x137698u: goto label_137698;
            case 0x13769Cu: goto label_13769c;
            case 0x1376A0u: goto label_1376a0;
            case 0x1376A4u: goto label_1376a4;
            case 0x1376A8u: goto label_1376a8;
            case 0x1376ACu: goto label_1376ac;
            case 0x1376B0u: goto label_1376b0;
            case 0x1376B4u: goto label_1376b4;
            case 0x1376B8u: goto label_1376b8;
            case 0x1376BCu: goto label_1376bc;
            case 0x1376C0u: goto label_1376c0;
            case 0x1376C4u: goto label_1376c4;
            case 0x1376C8u: goto label_1376c8;
            case 0x1376CCu: goto label_1376cc;
            case 0x1376D0u: goto label_1376d0;
            case 0x1376D4u: goto label_1376d4;
            case 0x1376D8u: goto label_1376d8;
            case 0x1376DCu: goto label_1376dc;
            case 0x1376E0u: goto label_1376e0;
            case 0x1376E4u: goto label_1376e4;
            case 0x1376E8u: goto label_1376e8;
            case 0x1376ECu: goto label_1376ec;
            case 0x1376F0u: goto label_1376f0;
            case 0x1376F4u: goto label_1376f4;
            case 0x1376F8u: goto label_1376f8;
            case 0x1376FCu: goto label_1376fc;
            case 0x137700u: goto label_137700;
            case 0x137704u: goto label_137704;
            case 0x137708u: goto label_137708;
            case 0x13770Cu: goto label_13770c;
            case 0x137710u: goto label_137710;
            case 0x137714u: goto label_137714;
            case 0x137718u: goto label_137718;
            case 0x13771Cu: goto label_13771c;
            case 0x137720u: goto label_137720;
            case 0x137724u: goto label_137724;
            case 0x137728u: goto label_137728;
            case 0x13772Cu: goto label_13772c;
            case 0x137730u: goto label_137730;
            case 0x137734u: goto label_137734;
            case 0x137738u: goto label_137738;
            case 0x13773Cu: goto label_13773c;
            case 0x137740u: goto label_137740;
            case 0x137744u: goto label_137744;
            case 0x137748u: goto label_137748;
            case 0x13774Cu: goto label_13774c;
            case 0x137750u: goto label_137750;
            case 0x137754u: goto label_137754;
            case 0x137758u: goto label_137758;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x137754u; }
            if (ctx->pc != 0x137754u) { return; }
        }
    }
    ctx->pc = 0x137754u;
label_137754:
    // 0x137754: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x137754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_137758:
    // 0x137758: 0xc  syscall     0
    ctx->pc = 0x137758u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
}
