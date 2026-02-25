#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: gameCharasel
// Address: 0x159620 - 0x15abc8
void gameCharasel_0x159620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("gameCharasel_0x159620");
#endif

    ctx->pc = 0x159620u;

    // 0x159620: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x159620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x159624: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x159624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x159628: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x159628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15962c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x159630: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x159630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x159634: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x159638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15963c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159648: 0x148002ab  bnez        $a0, . + 4 + (0x2AB << 2)
    ctx->pc = 0x159648u;
    {
        const bool branch_taken_0x159648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159648u;
            // 0x15964c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159648) {
            ctx->pc = 0x15A0F8u;
            goto label_15a0f8;
        }
    }
    ctx->pc = 0x159650u;
    // 0x159650: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159654: 0x8c242ce0  lw          $a0, 0x2CE0($at)
    ctx->pc = 0x159654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x159658: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159658u;
    {
        const bool branch_taken_0x159658 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159658u;
            // 0x15965c: 0x3083000f  andi        $v1, $a0, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159658) {
            ctx->pc = 0x15966Cu;
            goto label_15966c;
        }
    }
    ctx->pc = 0x159660u;
    // 0x159660: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159660u;
    {
        const bool branch_taken_0x159660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159660) {
            ctx->pc = 0x15966Cu;
            goto label_15966c;
        }
    }
    ctx->pc = 0x159668u;
    // 0x159668: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_15966c:
    // 0x15966c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15966cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159670: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x159670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x159674: 0x8c242ce8  lw          $a0, 0x2CE8($at)
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11496)));
    // 0x159678: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x159678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15967c: 0xa0239c53  sb          $v1, -0x63AD($at)
    ctx->pc = 0x15967cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294941779), (uint8_t)GPR_U32(ctx, 3));
    // 0x159680: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x159680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159684: 0x1083027a  beq         $a0, $v1, . + 4 + (0x27A << 2)
    ctx->pc = 0x159684u;
    {
        const bool branch_taken_0x159684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x159684) {
            ctx->pc = 0x15A070u;
            goto label_15a070;
        }
    }
    ctx->pc = 0x15968Cu;
    // 0x15968c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159690: 0x10830183  beq         $a0, $v1, . + 4 + (0x183 << 2)
    ctx->pc = 0x159690u;
    {
        const bool branch_taken_0x159690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x159694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159690u;
            // 0x159694: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159690) {
            ctx->pc = 0x159CA0u;
            goto label_159ca0;
        }
    }
    ctx->pc = 0x159698u;
    // 0x159698: 0x10920073  beq         $a0, $s2, . + 4 + (0x73 << 2)
    ctx->pc = 0x159698u;
    {
        const bool branch_taken_0x159698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x159698) {
            ctx->pc = 0x159868u;
            goto label_159868;
        }
    }
    ctx->pc = 0x1596A0u;
    // 0x1596a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1596A0u;
    {
        const bool branch_taken_0x1596a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1596a0) {
            ctx->pc = 0x1596B0u;
            goto label_1596b0;
        }
    }
    ctx->pc = 0x1596A8u;
    // 0x1596a8: 0x1000053b  b           . + 4 + (0x53B << 2)
    ctx->pc = 0x1596A8u;
    {
        const bool branch_taken_0x1596a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1596a8) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x1596B0u;
label_1596b0:
    // 0x1596b0: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1596b4: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x1596b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x1596b8: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1596b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1596bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1596bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596c0: 0x26d69c30  addiu       $s6, $s6, -0x63D0
    ctx->pc = 0x1596c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941744));
    // 0x1596c4: 0x26733000  addiu       $s3, $s3, 0x3000
    ctx->pc = 0x1596c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12288));
    // 0x1596c8: 0x26312e00  addiu       $s1, $s1, 0x2E00
    ctx->pc = 0x1596c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11776));
    // 0x1596cc: 0x0  nop
    ctx->pc = 0x1596ccu;
    // NOP
label_1596d0:
    // 0x1596d0: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1596d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1596d4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1596D4u;
    SET_GPR_U32(ctx, 31, 0x1596DCu);
    ctx->pc = 0x1596D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1596D4u;
            // 0x1596d8: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596DCu; }
        if (ctx->pc != 0x1596DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596DCu; }
        if (ctx->pc != 0x1596DCu) { return; }
    }
    ctx->pc = 0x1596DCu;
    // 0x1596dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1596dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1596e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1596e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1596e4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1596e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1596e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1596e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596ec: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x1596ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x1596f0: 0x8c272cd8  lw          $a3, 0x2CD8($at)
    ctx->pc = 0x1596f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11480)));
    // 0x1596f4: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x1596f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x1596f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1596f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596fc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1596fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159700: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x159700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159704: 0x2a51818  mult        $v1, $s5, $a1
    ctx->pc = 0x159704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159708: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x159708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15970c: 0x2442ff54  addiu       $v0, $v0, -0xAC
    ctx->pc = 0x15970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967124));
    // 0x159710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159714: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x159714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x159718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15971c: 0x0  nop
    ctx->pc = 0x15971cu;
    // NOP
    // 0x159720: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x159720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x159724: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159724u;
    SET_GPR_U32(ctx, 31, 0x15972Cu);
    ctx->pc = 0x159728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159724u;
            // 0x159728: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15972Cu; }
        if (ctx->pc != 0x15972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15972Cu; }
        if (ctx->pc != 0x15972Cu) { return; }
    }
    ctx->pc = 0x15972Cu;
    // 0x15972c: 0x8e890014  lw          $t1, 0x14($s4)
    ctx->pc = 0x15972cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x159730: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159734: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159738: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x159738u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15973c: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x15973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x159740: 0x8c282cd8  lw          $t0, 0x2CD8($at)
    ctx->pc = 0x159740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11480)));
    // 0x159744: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x159744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x159748: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x159748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15974c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x159750: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x159750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x159754: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x159754u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x159758: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x159758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x15975c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15975cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159760: 0x2a93018  mult        $a2, $s5, $t1
    ctx->pc = 0x159760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159764: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x159764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x159768: 0x1223821  addu        $a3, $t1, $v0
    ctx->pc = 0x159768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15976c: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x15976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x159770: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x159770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x159774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159778: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x159778u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15977c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15977cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159780: 0x0  nop
    ctx->pc = 0x159780u;
    // NOP
    // 0x159784: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x159784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x159788: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159788u;
    SET_GPR_U32(ctx, 31, 0x159790u);
    ctx->pc = 0x15978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159788u;
            // 0x15978c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159790u; }
        if (ctx->pc != 0x159790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159790u; }
        if (ctx->pc != 0x159790u) { return; }
    }
    ctx->pc = 0x159790u;
    // 0x159790: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x159794: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x159794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x159798: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159798u;
    SET_GPR_U32(ctx, 31, 0x1597A0u);
    ctx->pc = 0x15979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159798u;
            // 0x15979c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597A0u; }
        if (ctx->pc != 0x1597A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597A0u; }
        if (ctx->pc != 0x1597A0u) { return; }
    }
    ctx->pc = 0x1597A0u;
    // 0x1597a0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1597a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1597a4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1597a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1597a8: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x1597ac: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1597acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1597b0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1597b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1597b4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1597b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1597b8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1597bc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1597bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1597c0: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x1597C0u;
    SET_GPR_U32(ctx, 31, 0x1597C8u);
    ctx->pc = 0x1597C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1597C0u;
            // 0x1597c4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597C8u; }
        if (ctx->pc != 0x1597C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597C8u; }
        if (ctx->pc != 0x1597C8u) { return; }
    }
    ctx->pc = 0x1597C8u;
    // 0x1597c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1597c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1597cc: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1597ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1597d0: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x1597d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1597d4: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1597d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1597d8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1597d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1597dc: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1597DCu;
    {
        const bool branch_taken_0x1597dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1597E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1597DCu;
            // 0x1597e0: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597dc) {
            ctx->pc = 0x1596D0u;
            goto label_1596d0;
        }
    }
    ctx->pc = 0x1597E4u;
    // 0x1597e4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1597e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1597e8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1597e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1597ec: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x1597ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x1597f0: 0x24639c28  addiu       $v1, $v1, -0x63D8
    ctx->pc = 0x1597f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941736));
    // 0x1597f4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1597f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x1597f8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1597f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1597fc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1597fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159800: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x159800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x159804: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x159804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x159808: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x159808u;
    SET_GPR_U32(ctx, 31, 0x159810u);
    ctx->pc = 0x15980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159808u;
            // 0x15980c: 0xafa200f8  sw          $v0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159810u; }
        if (ctx->pc != 0x159810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159810u; }
        if (ctx->pc != 0x159810u) { return; }
    }
    ctx->pc = 0x159810u;
    // 0x159810: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x159810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x159814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159818: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x159818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15981c: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15981Cu;
    SET_GPR_U32(ctx, 31, 0x159824u);
    ctx->pc = 0x159820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15981Cu;
            // 0x159820: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159824u; }
        if (ctx->pc != 0x159824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159824u; }
        if (ctx->pc != 0x159824u) { return; }
    }
    ctx->pc = 0x159824u;
    // 0x159824: 0xc056030  jal         func_1580C0
    ctx->pc = 0x159824u;
    SET_GPR_U32(ctx, 31, 0x15982Cu);
    ctx->pc = 0x159828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159824u;
            // 0x159828: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15982Cu; }
        if (ctx->pc != 0x15982Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15982Cu; }
        if (ctx->pc != 0x15982Cu) { return; }
    }
    ctx->pc = 0x15982Cu;
    // 0x15982c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15982Cu;
    SET_GPR_U32(ctx, 31, 0x159834u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159834u; }
        if (ctx->pc != 0x159834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159834u; }
        if (ctx->pc != 0x159834u) { return; }
    }
    ctx->pc = 0x159834u;
    // 0x159834: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159838: 0x8c232cd8  lw          $v1, 0x2CD8($at)
    ctx->pc = 0x159838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11480)));
    // 0x15983c: 0x2861ff22  slti        $at, $v1, -0xDE
    ctx->pc = 0x15983cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967074) ? 1 : 0);
    // 0x159840: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x159840u;
    {
        const bool branch_taken_0x159840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159840) {
            ctx->pc = 0x159858u;
            goto label_159858;
        }
    }
    ctx->pc = 0x159848u;
    // 0x159848: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x159848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15984c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159850: 0x100004d1  b           . + 4 + (0x4D1 << 2)
    ctx->pc = 0x159850u;
    {
        const bool branch_taken_0x159850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159850u;
            // 0x159854: 0xac232cd8  sw          $v1, 0x2CD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159850) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x159858u;
label_159858:
    // 0x159858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x159858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15985c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159860: 0x100004cd  b           . + 4 + (0x4CD << 2)
    ctx->pc = 0x159860u;
    {
        const bool branch_taken_0x159860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159860u;
            // 0x159864: 0xac232ce8  sw          $v1, 0x2CE8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159860) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x159868u;
label_159868:
    // 0x159868: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15986c: 0x8c222ce0  lw          $v0, 0x2CE0($at)
    ctx->pc = 0x15986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x159870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159874: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159878: 0xac222ce0  sw          $v0, 0x2CE0($at)
    ctx->pc = 0x159878u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11488), GPR_U32(ctx, 2));
    // 0x15987c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15987cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159880: 0x8c222ce0  lw          $v0, 0x2CE0($at)
    ctx->pc = 0x159880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x159884: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159884u;
    {
        const bool branch_taken_0x159884 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x159888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159884u;
            // 0x159888: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159884) {
            ctx->pc = 0x159890u;
            goto label_159890;
        }
    }
    ctx->pc = 0x15988Cu;
    // 0x15988c: 0xac202ce0  sw          $zero, 0x2CE0($at)
    ctx->pc = 0x15988cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11488), GPR_U32(ctx, 0));
label_159890:
    // 0x159890: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159894: 0x8c2223f8  lw          $v0, 0x23F8($at)
    ctx->pc = 0x159894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x159898: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x159898u;
    {
        const bool branch_taken_0x159898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159898u;
            // 0x15989c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159898) {
            ctx->pc = 0x1598C0u;
            goto label_1598c0;
        }
    }
    ctx->pc = 0x1598A0u;
    // 0x1598a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1598a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1598a4: 0x8c222cf8  lw          $v0, 0x2CF8($at)
    ctx->pc = 0x1598a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11512)));
    // 0x1598a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1598a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1598ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1598acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1598b0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1598B0u;
    SET_GPR_U32(ctx, 31, 0x1598B8u);
    ctx->pc = 0x1598B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1598B0u;
            // 0x1598b4: 0xac222cf8  sw          $v0, 0x2CF8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598B8u; }
        if (ctx->pc != 0x1598B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598B8u; }
        if (ctx->pc != 0x1598B8u) { return; }
    }
    ctx->pc = 0x1598B8u;
    // 0x1598b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1598B8u;
    {
        const bool branch_taken_0x1598b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598b8) {
            ctx->pc = 0x1598E8u;
            goto label_1598e8;
        }
    }
    ctx->pc = 0x1598C0u;
label_1598c0:
    // 0x1598c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1598c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1598c4: 0x8c2223f0  lw          $v0, 0x23F0($at)
    ctx->pc = 0x1598c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x1598c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1598C8u;
    {
        const bool branch_taken_0x1598c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598C8u;
            // 0x1598cc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598c8) {
            ctx->pc = 0x1598E8u;
            goto label_1598e8;
        }
    }
    ctx->pc = 0x1598D0u;
    // 0x1598d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1598d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1598d4: 0x8c222cf8  lw          $v0, 0x2CF8($at)
    ctx->pc = 0x1598d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11512)));
    // 0x1598d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1598dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1598e0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1598E0u;
    SET_GPR_U32(ctx, 31, 0x1598E8u);
    ctx->pc = 0x1598E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1598E0u;
            // 0x1598e4: 0xac222cf8  sw          $v0, 0x2CF8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598E8u; }
        if (ctx->pc != 0x1598E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1598E8u; }
        if (ctx->pc != 0x1598E8u) { return; }
    }
    ctx->pc = 0x1598E8u;
label_1598e8:
    // 0x1598e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1598e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1598ec: 0x8c222cf8  lw          $v0, 0x2CF8($at)
    ctx->pc = 0x1598ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11512)));
    // 0x1598f0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1598f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1598f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1598F4u;
    {
        const bool branch_taken_0x1598f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1598F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598F4u;
            // 0x1598f8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598f4) {
            ctx->pc = 0x159900u;
            goto label_159900;
        }
    }
    ctx->pc = 0x1598FCu;
    // 0x1598fc: 0xac202cf8  sw          $zero, 0x2CF8($at)
    ctx->pc = 0x1598fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11512), GPR_U32(ctx, 0));
label_159900:
    // 0x159900: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159904: 0x8c222cf8  lw          $v0, 0x2CF8($at)
    ctx->pc = 0x159904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11512)));
    // 0x159908: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159908u;
    {
        const bool branch_taken_0x159908 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159908u;
            // 0x15990c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159908) {
            ctx->pc = 0x159918u;
            goto label_159918;
        }
    }
    ctx->pc = 0x159910u;
    // 0x159910: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159914: 0xac222cf8  sw          $v0, 0x2CF8($at)
    ctx->pc = 0x159914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11512), GPR_U32(ctx, 2));
label_159918:
    // 0x159918: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15991c: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x15991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x159920: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x159920u;
    {
        const bool branch_taken_0x159920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159920u;
            // 0x159924: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159920) {
            ctx->pc = 0x159948u;
            goto label_159948;
        }
    }
    ctx->pc = 0x159928u;
    // 0x159928: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x159928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x15992c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15992Cu;
    {
        const bool branch_taken_0x15992c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15992c) {
            ctx->pc = 0x159948u;
            goto label_159948;
        }
    }
    ctx->pc = 0x159934u;
    // 0x159934: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159938: 0x8c222ce0  lw          $v0, 0x2CE0($at)
    ctx->pc = 0x159938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x15993c: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15993Cu;
    {
        const bool branch_taken_0x15993c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15993c) {
            ctx->pc = 0x159970u;
            goto label_159970;
        }
    }
    ctx->pc = 0x159944u;
    // 0x159944: 0x0  nop
    ctx->pc = 0x159944u;
    // NOP
label_159948:
    // 0x159948: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15994c: 0x8c232cf8  lw          $v1, 0x2CF8($at)
    ctx->pc = 0x15994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11512)));
    // 0x159950: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159954: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x159954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159958: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15995c: 0xac222ce8  sw          $v0, 0x2CE8($at)
    ctx->pc = 0x15995cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11496), GPR_U32(ctx, 2));
    // 0x159960: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159964: 0xc05d110  jal         func_174440
    ctx->pc = 0x159964u;
    SET_GPR_U32(ctx, 31, 0x15996Cu);
    ctx->pc = 0x159968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159964u;
            // 0x159968: 0xac233558  sw          $v1, 0x3558($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15996Cu; }
        if (ctx->pc != 0x15996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15996Cu; }
        if (ctx->pc != 0x15996Cu) { return; }
    }
    ctx->pc = 0x15996Cu;
    // 0x15996c: 0x0  nop
    ctx->pc = 0x15996cu;
    // NOP
label_159970:
    // 0x159970: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x159970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x159974: 0xc05c00c  jal         func_170030
    ctx->pc = 0x159974u;
    SET_GPR_U32(ctx, 31, 0x15997Cu);
    ctx->pc = 0x159978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159974u;
            // 0x159978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15997Cu; }
        if (ctx->pc != 0x15997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15997Cu; }
        if (ctx->pc != 0x15997Cu) { return; }
    }
    ctx->pc = 0x15997Cu;
    // 0x15997c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15997cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159980: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159984: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x159984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x159988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15998c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15998cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159990: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x159990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x159994: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159998: 0x24842d40  addiu       $a0, $a0, 0x2D40
    ctx->pc = 0x159998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11584));
    // 0x15999c: 0x24e7ff22  addiu       $a3, $a3, -0xDE
    ctx->pc = 0x15999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967074));
    // 0x1599a0: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x1599a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x1599a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1599a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1599a8: 0x8c232cf8  lw          $v1, 0x2CF8($at)
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11512)));
    // 0x1599ac: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x1599acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x1599b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1599b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1599b4: 0x0  nop
    ctx->pc = 0x1599b4u;
    // NOP
    // 0x1599b8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1599b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1599bc: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1599bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1599c0: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1599c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1599c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1599c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1599c8: 0xc056038  jal         func_1580E0
    ctx->pc = 0x1599C8u;
    SET_GPR_U32(ctx, 31, 0x1599D0u);
    ctx->pc = 0x1599CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1599C8u;
            // 0x1599cc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599D0u; }
        if (ctx->pc != 0x1599D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599D0u; }
        if (ctx->pc != 0x1599D0u) { return; }
    }
    ctx->pc = 0x1599D0u;
    // 0x1599d0: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x1599d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1599d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1599d8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1599d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x1599dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1599dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1599e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1599e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1599e4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1599e8: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x1599e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1599ec: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1599ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1599f0: 0x8c252cf8  lw          $a1, 0x2CF8($at)
    ctx->pc = 0x1599f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11512)));
    // 0x1599f4: 0x24842d50  addiu       $a0, $a0, 0x2D50
    ctx->pc = 0x1599f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
    // 0x1599f8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1599f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1599fc: 0x2463ff54  addiu       $v1, $v1, -0xAC
    ctx->pc = 0x1599fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x159a00: 0x24c6ff22  addiu       $a2, $a2, -0xDE
    ctx->pc = 0x159a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967074));
    // 0x159a04: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x159a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x159a08: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x159a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159a0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x159a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a14: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x159a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x159a18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159a1c: 0x0  nop
    ctx->pc = 0x159a1cu;
    // NOP
    // 0x159a20: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x159a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x159a24: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159A24u;
    SET_GPR_U32(ctx, 31, 0x159A2Cu);
    ctx->pc = 0x159A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A24u;
            // 0x159a28: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A2Cu; }
        if (ctx->pc != 0x159A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A2Cu; }
        if (ctx->pc != 0x159A2Cu) { return; }
    }
    ctx->pc = 0x159A2Cu;
    // 0x159a2c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x159a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159a30: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159a34: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x159a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159a38: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159A38u;
    SET_GPR_U32(ctx, 31, 0x159A40u);
    ctx->pc = 0x159A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A38u;
            // 0x159a3c: 0x24842d00  addiu       $a0, $a0, 0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A40u; }
        if (ctx->pc != 0x159A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A40u; }
        if (ctx->pc != 0x159A40u) { return; }
    }
    ctx->pc = 0x159A40u;
    // 0x159a40: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x159a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159a44: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159a48: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x159a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x159a4c: 0x24842d10  addiu       $a0, $a0, 0x2D10
    ctx->pc = 0x159a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11536));
    // 0x159a50: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x159a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159a54: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x159a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x159a58: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x159a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x159a5c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159A5Cu;
    SET_GPR_U32(ctx, 31, 0x159A64u);
    ctx->pc = 0x159A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A5Cu;
            // 0x159a60: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A64u; }
        if (ctx->pc != 0x159A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A64u; }
        if (ctx->pc != 0x159A64u) { return; }
    }
    ctx->pc = 0x159A64u;
    // 0x159a64: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159a68: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x159a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x159a6c: 0x27b700f4  addiu       $s7, $sp, 0xF4
    ctx->pc = 0x159a6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x159a70: 0x24422d40  addiu       $v0, $v0, 0x2D40
    ctx->pc = 0x159a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11584));
    // 0x159a74: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x159a74u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x159a78: 0x27be00fc  addiu       $fp, $sp, 0xFC
    ctx->pc = 0x159a78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x159a7c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x159a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x159a80: 0x24632d00  addiu       $v1, $v1, 0x2D00
    ctx->pc = 0x159a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11520));
    // 0x159a84: 0x24429c50  addiu       $v0, $v0, -0x63B0
    ctx->pc = 0x159a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941776));
    // 0x159a88: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x159a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x159a8c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x159a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x159a90: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x159a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x159a94: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x159A94u;
    SET_GPR_U32(ctx, 31, 0x159A9Cu);
    ctx->pc = 0x159A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A94u;
            // 0x159a98: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A9Cu; }
        if (ctx->pc != 0x159A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A9Cu; }
        if (ctx->pc != 0x159A9Cu) { return; }
    }
    ctx->pc = 0x159A9Cu;
    // 0x159a9c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x159a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x159aa0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x159aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x159aa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159aa8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x159aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159aac: 0xc056034  jal         func_1580D0
    ctx->pc = 0x159AACu;
    SET_GPR_U32(ctx, 31, 0x159AB4u);
    ctx->pc = 0x159AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159AACu;
            // 0x159ab0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AB4u; }
        if (ctx->pc != 0x159AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AB4u; }
        if (ctx->pc != 0x159AB4u) { return; }
    }
    ctx->pc = 0x159AB4u;
    // 0x159ab4: 0xc056030  jal         func_1580C0
    ctx->pc = 0x159AB4u;
    SET_GPR_U32(ctx, 31, 0x159ABCu);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ABCu; }
        if (ctx->pc != 0x159ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ABCu; }
        if (ctx->pc != 0x159ABCu) { return; }
    }
    ctx->pc = 0x159ABCu;
    // 0x159abc: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x159ABCu;
    SET_GPR_U32(ctx, 31, 0x159AC4u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AC4u; }
        if (ctx->pc != 0x159AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AC4u; }
        if (ctx->pc != 0x159AC4u) { return; }
    }
    ctx->pc = 0x159AC4u;
    // 0x159ac4: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x159ac4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x159ac8: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x159ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x159acc: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x159accu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x159ad0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ad4: 0x26d69c30  addiu       $s6, $s6, -0x63D0
    ctx->pc = 0x159ad4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941744));
    // 0x159ad8: 0x26b53000  addiu       $s5, $s5, 0x3000
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12288));
    // 0x159adc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x159adcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159ae0: 0x26732e00  addiu       $s3, $s3, 0x2E00
    ctx->pc = 0x159ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 11776));
    // 0x159ae4: 0x0  nop
    ctx->pc = 0x159ae4u;
    // NOP
label_159ae8:
    // 0x159ae8: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x159ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x159aec: 0xc05c00c  jal         func_170030
    ctx->pc = 0x159AECu;
    SET_GPR_U32(ctx, 31, 0x159AF4u);
    ctx->pc = 0x159AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159AECu;
            // 0x159af0: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AF4u; }
        if (ctx->pc != 0x159AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159AF4u; }
        if (ctx->pc != 0x159AF4u) { return; }
    }
    ctx->pc = 0x159AF4u;
    // 0x159af4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x159af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159afc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x159afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x159b00: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x159b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x159b04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x159b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159b08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x159b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b0c: 0x24e7ff22  addiu       $a3, $a3, -0xDE
    ctx->pc = 0x159b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967074));
    // 0x159b10: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x159b10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x159b14: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x159b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159b18: 0x2261818  mult        $v1, $s1, $a2
    ctx->pc = 0x159b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159b1c: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x159b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x159b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b24: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x159b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x159b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159b2c: 0x0  nop
    ctx->pc = 0x159b2cu;
    // NOP
    // 0x159b30: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x159b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x159b34: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159B34u;
    SET_GPR_U32(ctx, 31, 0x159B3Cu);
    ctx->pc = 0x159B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159B34u;
            // 0x159b38: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B3Cu; }
        if (ctx->pc != 0x159B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B3Cu; }
        if (ctx->pc != 0x159B3Cu) { return; }
    }
    ctx->pc = 0x159B3Cu;
    // 0x159b3c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159b40: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x159b40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x159b44: 0x149100  sll         $s2, $s4, 4
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x159b48: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x159b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x159b4c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x159b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x159b50: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x159b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159b54: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x159b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x159b58: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x159b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159b5c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x159b5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x159b60: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x159b64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x159b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159b68: 0x2283018  mult        $a2, $s1, $t0
    ctx->pc = 0x159b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159b6c: 0x24e2ff22  addiu       $v0, $a3, -0xDE
    ctx->pc = 0x159b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967074));
    // 0x159b70: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x159b74: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x159b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x159b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159b7c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x159b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x159b80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x159b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b88: 0x0  nop
    ctx->pc = 0x159b88u;
    // NOP
    // 0x159b8c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x159b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x159b90: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159B90u;
    SET_GPR_U32(ctx, 31, 0x159B98u);
    ctx->pc = 0x159B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159B90u;
            // 0x159b94: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B98u; }
        if (ctx->pc != 0x159B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159B98u; }
        if (ctx->pc != 0x159B98u) { return; }
    }
    ctx->pc = 0x159B98u;
    // 0x159b98: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x159b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159b9c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x159b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159ba0: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159BA0u;
    SET_GPR_U32(ctx, 31, 0x159BA8u);
    ctx->pc = 0x159BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159BA0u;
            // 0x159ba4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BA8u; }
        if (ctx->pc != 0x159BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BA8u; }
        if (ctx->pc != 0x159BA8u) { return; }
    }
    ctx->pc = 0x159BA8u;
    // 0x159ba8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159bac: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x159bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159bb0: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x159bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x159bb4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x159bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x159bb8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x159bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x159bbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x159bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159bc0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x159bc4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x159bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x159bc8: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159BC8u;
    SET_GPR_U32(ctx, 31, 0x159BD0u);
    ctx->pc = 0x159BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159BC8u;
            // 0x159bcc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BD0u; }
        if (ctx->pc != 0x159BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BD0u; }
        if (ctx->pc != 0x159BD0u) { return; }
    }
    ctx->pc = 0x159BD0u;
    // 0x159bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x159bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x159bd4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x159bd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x159bd8: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x159bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x159bdc: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x159bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x159be0: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x159be0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x159be4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x159BE4u;
    {
        const bool branch_taken_0x159be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BE4u;
            // 0x159be8: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159be4) {
            ctx->pc = 0x159AE8u;
            goto label_159ae8;
        }
    }
    ctx->pc = 0x159BECu;
    // 0x159bec: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x159becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x159bf0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x159bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x159bf4: 0x24633000  addiu       $v1, $v1, 0x3000
    ctx->pc = 0x159bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12288));
    // 0x159bf8: 0x24429c28  addiu       $v0, $v0, -0x63D8
    ctx->pc = 0x159bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941736));
    // 0x159bfc: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x159bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x159c00: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x159c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x159c04: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x159c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x159c08: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x159c08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x159c0c: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x159c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
    // 0x159c10: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x159c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x159c14: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x159C14u;
    SET_GPR_U32(ctx, 31, 0x159C1Cu);
    ctx->pc = 0x159C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C14u;
            // 0x159c18: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C1Cu; }
        if (ctx->pc != 0x159C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C1Cu; }
        if (ctx->pc != 0x159C1Cu) { return; }
    }
    ctx->pc = 0x159C1Cu;
    // 0x159c1c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x159c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x159c20: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x159c24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159c28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x159c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159c2c: 0xc056034  jal         func_1580D0
    ctx->pc = 0x159C2Cu;
    SET_GPR_U32(ctx, 31, 0x159C34u);
    ctx->pc = 0x159C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C2Cu;
            // 0x159c30: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C34u; }
        if (ctx->pc != 0x159C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C34u; }
        if (ctx->pc != 0x159C34u) { return; }
    }
    ctx->pc = 0x159C34u;
    // 0x159c34: 0xc056030  jal         func_1580C0
    ctx->pc = 0x159C34u;
    SET_GPR_U32(ctx, 31, 0x159C3Cu);
    ctx->pc = 0x159C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C34u;
            // 0x159c38: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C3Cu; }
        if (ctx->pc != 0x159C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C3Cu; }
        if (ctx->pc != 0x159C3Cu) { return; }
    }
    ctx->pc = 0x159C3Cu;
    // 0x159c3c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x159C3Cu;
    SET_GPR_U32(ctx, 31, 0x159C44u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C44u; }
        if (ctx->pc != 0x159C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C44u; }
        if (ctx->pc != 0x159C44u) { return; }
    }
    ctx->pc = 0x159C44u;
    // 0x159c44: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159c48: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x159c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x159c4c: 0x8c232ce0  lw          $v1, 0x2CE0($at)
    ctx->pc = 0x159c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x159c50: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x159c50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x159c54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x159c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x159c58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x159c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x159c5c: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x159c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x159c60: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x159c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159c64: 0x0  nop
    ctx->pc = 0x159c64u;
    // NOP
    // 0x159c68: 0x0  nop
    ctx->pc = 0x159c68u;
    // NOP
    // 0x159c6c: 0x1010  mfhi        $v0
    ctx->pc = 0x159c6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x159c70: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x159c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x159c74: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x159c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x159c78: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x159C78u;
    SET_GPR_U32(ctx, 31, 0x159C80u);
    ctx->pc = 0x159C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C78u;
            // 0x159c7c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C80u; }
        if (ctx->pc != 0x159C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C80u; }
        if (ctx->pc != 0x159C80u) { return; }
    }
    ctx->pc = 0x159C80u;
    // 0x159c80: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x159c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x159c84: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x159c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x159c88: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x159c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x159c8c: 0xc060a44  jal         func_182910
    ctx->pc = 0x159C8Cu;
    SET_GPR_U32(ctx, 31, 0x159C94u);
    ctx->pc = 0x159C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C8Cu;
            // 0x159c90: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C94u; }
        if (ctx->pc != 0x159C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C94u; }
        if (ctx->pc != 0x159C94u) { return; }
    }
    ctx->pc = 0x159C94u;
    // 0x159c94: 0x100003c0  b           . + 4 + (0x3C0 << 2)
    ctx->pc = 0x159C94u;
    {
        const bool branch_taken_0x159c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159c94) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x159C9Cu;
    // 0x159c9c: 0x0  nop
    ctx->pc = 0x159c9cu;
    // NOP
label_159ca0:
    // 0x159ca0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159ca4: 0x8c222ce0  lw          $v0, 0x2CE0($at)
    ctx->pc = 0x159ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x159ca8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159cac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159cb0: 0xac222ce0  sw          $v0, 0x2CE0($at)
    ctx->pc = 0x159cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11488), GPR_U32(ctx, 2));
    // 0x159cb4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159cb8: 0x8c222ce0  lw          $v0, 0x2CE0($at)
    ctx->pc = 0x159cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x159cbc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159CBCu;
    {
        const bool branch_taken_0x159cbc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x159CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CBCu;
            // 0x159cc0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cbc) {
            ctx->pc = 0x159CC8u;
            goto label_159cc8;
        }
    }
    ctx->pc = 0x159CC4u;
    // 0x159cc4: 0xac202ce0  sw          $zero, 0x2CE0($at)
    ctx->pc = 0x159cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11488), GPR_U32(ctx, 0));
label_159cc8:
    // 0x159cc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159ccc: 0x8c2223f8  lw          $v0, 0x23F8($at)
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x159cd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x159CD0u;
    {
        const bool branch_taken_0x159cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CD0u;
            // 0x159cd4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cd0) {
            ctx->pc = 0x159CF8u;
            goto label_159cf8;
        }
    }
    ctx->pc = 0x159CD8u;
    // 0x159cd8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x159cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159cdc: 0x8c222cf0  lw          $v0, 0x2CF0($at)
    ctx->pc = 0x159cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11504)));
    // 0x159ce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159ce4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159ce8: 0xc05d110  jal         func_174440
    ctx->pc = 0x159CE8u;
    SET_GPR_U32(ctx, 31, 0x159CF0u);
    ctx->pc = 0x159CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159CE8u;
            // 0x159cec: 0xac222cf0  sw          $v0, 0x2CF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CF0u; }
        if (ctx->pc != 0x159CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159CF0u; }
        if (ctx->pc != 0x159CF0u) { return; }
    }
    ctx->pc = 0x159CF0u;
    // 0x159cf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x159CF0u;
    {
        const bool branch_taken_0x159cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159cf0) {
            ctx->pc = 0x159D20u;
            goto label_159d20;
        }
    }
    ctx->pc = 0x159CF8u;
label_159cf8:
    // 0x159cf8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159cfc: 0x8c2223f0  lw          $v0, 0x23F0($at)
    ctx->pc = 0x159cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x159d00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159D00u;
    {
        const bool branch_taken_0x159d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159D00u;
            // 0x159d04: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d00) {
            ctx->pc = 0x159D20u;
            goto label_159d20;
        }
    }
    ctx->pc = 0x159D08u;
    // 0x159d08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x159d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159d0c: 0x8c222cf0  lw          $v0, 0x2CF0($at)
    ctx->pc = 0x159d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11504)));
    // 0x159d10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159d14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d18: 0xc05d110  jal         func_174440
    ctx->pc = 0x159D18u;
    SET_GPR_U32(ctx, 31, 0x159D20u);
    ctx->pc = 0x159D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159D18u;
            // 0x159d1c: 0xac222cf0  sw          $v0, 0x2CF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D20u; }
        if (ctx->pc != 0x159D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D20u; }
        if (ctx->pc != 0x159D20u) { return; }
    }
    ctx->pc = 0x159D20u;
label_159d20:
    // 0x159d20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d24: 0x8c222cf0  lw          $v0, 0x2CF0($at)
    ctx->pc = 0x159d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11504)));
    // 0x159d28: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x159d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x159d2c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159D2Cu;
    {
        const bool branch_taken_0x159d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159D2Cu;
            // 0x159d30: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d2c) {
            ctx->pc = 0x159D38u;
            goto label_159d38;
        }
    }
    ctx->pc = 0x159D34u;
    // 0x159d34: 0xac202cf0  sw          $zero, 0x2CF0($at)
    ctx->pc = 0x159d34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11504), GPR_U32(ctx, 0));
label_159d38:
    // 0x159d38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d3c: 0x8c222cf0  lw          $v0, 0x2CF0($at)
    ctx->pc = 0x159d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11504)));
    // 0x159d40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159D40u;
    {
        const bool branch_taken_0x159d40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159D40u;
            // 0x159d44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d40) {
            ctx->pc = 0x159D50u;
            goto label_159d50;
        }
    }
    ctx->pc = 0x159D48u;
    // 0x159d48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d4c: 0xac222cf0  sw          $v0, 0x2CF0($at)
    ctx->pc = 0x159d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11504), GPR_U32(ctx, 2));
label_159d50:
    // 0x159d50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d54: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x159d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x159d58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x159D58u;
    {
        const bool branch_taken_0x159d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159D58u;
            // 0x159d5c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d58) {
            ctx->pc = 0x159D80u;
            goto label_159d80;
        }
    }
    ctx->pc = 0x159D60u;
    // 0x159d60: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x159d64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159D64u;
    {
        const bool branch_taken_0x159d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159d64) {
            ctx->pc = 0x159D80u;
            goto label_159d80;
        }
    }
    ctx->pc = 0x159D6Cu;
    // 0x159d6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d70: 0x8c222ce0  lw          $v0, 0x2CE0($at)
    ctx->pc = 0x159d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x159d74: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x159D74u;
    {
        const bool branch_taken_0x159d74 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x159d74) {
            ctx->pc = 0x159DA8u;
            goto label_159da8;
        }
    }
    ctx->pc = 0x159D7Cu;
    // 0x159d7c: 0x0  nop
    ctx->pc = 0x159d7cu;
    // NOP
label_159d80:
    // 0x159d80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d84: 0x8c232cf0  lw          $v1, 0x2CF0($at)
    ctx->pc = 0x159d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11504)));
    // 0x159d88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x159d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159d8c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x159d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159d90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d94: 0xac222ce8  sw          $v0, 0x2CE8($at)
    ctx->pc = 0x159d94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11496), GPR_U32(ctx, 2));
    // 0x159d98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159d9c: 0xc05d110  jal         func_174440
    ctx->pc = 0x159D9Cu;
    SET_GPR_U32(ctx, 31, 0x159DA4u);
    ctx->pc = 0x159DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159D9Cu;
            // 0x159da0: 0xac233548  sw          $v1, 0x3548($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DA4u; }
        if (ctx->pc != 0x159DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DA4u; }
        if (ctx->pc != 0x159DA4u) { return; }
    }
    ctx->pc = 0x159DA4u;
    // 0x159da4: 0x0  nop
    ctx->pc = 0x159da4u;
    // NOP
label_159da8:
    // 0x159da8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x159da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x159dac: 0xc05c00c  jal         func_170030
    ctx->pc = 0x159DACu;
    SET_GPR_U32(ctx, 31, 0x159DB4u);
    ctx->pc = 0x159DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159DACu;
            // 0x159db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DB4u; }
        if (ctx->pc != 0x159DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DB4u; }
        if (ctx->pc != 0x159DB4u) { return; }
    }
    ctx->pc = 0x159DB4u;
    // 0x159db4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x159db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159db8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159dbc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x159dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x159dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dc4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x159dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159dc8: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x159dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x159dcc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159dd0: 0x24842d40  addiu       $a0, $a0, 0x2D40
    ctx->pc = 0x159dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11584));
    // 0x159dd4: 0x24e7ff2c  addiu       $a3, $a3, -0xD4
    ctx->pc = 0x159dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967084));
    // 0x159dd8: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x159dd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x159ddc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x159ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159de0: 0x8c232cf0  lw          $v1, 0x2CF0($at)
    ctx->pc = 0x159de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11504)));
    // 0x159de4: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x159de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x159de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159dec: 0x0  nop
    ctx->pc = 0x159decu;
    // NOP
    // 0x159df0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x159df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x159df4: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x159df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159df8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x159df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x159dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e00: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159E00u;
    SET_GPR_U32(ctx, 31, 0x159E08u);
    ctx->pc = 0x159E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E00u;
            // 0x159e04: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E08u; }
        if (ctx->pc != 0x159E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E08u; }
        if (ctx->pc != 0x159E08u) { return; }
    }
    ctx->pc = 0x159E08u;
    // 0x159e08: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x159e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x159e0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159e10: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x159e10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x159e14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x159e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159e18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x159e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159e1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x159e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159e20: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x159e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x159e24: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159e28: 0x8c252cf0  lw          $a1, 0x2CF0($at)
    ctx->pc = 0x159e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11504)));
    // 0x159e2c: 0x24842d50  addiu       $a0, $a0, 0x2D50
    ctx->pc = 0x159e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
    // 0x159e30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x159e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x159e34: 0x2463ff54  addiu       $v1, $v1, -0xAC
    ctx->pc = 0x159e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x159e38: 0x24c6ff2c  addiu       $a2, $a2, -0xD4
    ctx->pc = 0x159e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967084));
    // 0x159e3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x159e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x159e40: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x159e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x159e44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x159e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e4c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x159e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x159e50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159e54: 0x0  nop
    ctx->pc = 0x159e54u;
    // NOP
    // 0x159e58: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x159e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x159e5c: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159E5Cu;
    SET_GPR_U32(ctx, 31, 0x159E64u);
    ctx->pc = 0x159E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E5Cu;
            // 0x159e60: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E64u; }
        if (ctx->pc != 0x159E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E64u; }
        if (ctx->pc != 0x159E64u) { return; }
    }
    ctx->pc = 0x159E64u;
    // 0x159e64: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x159e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159e68: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159e6c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x159e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159e70: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159E70u;
    SET_GPR_U32(ctx, 31, 0x159E78u);
    ctx->pc = 0x159E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E70u;
            // 0x159e74: 0x24842d00  addiu       $a0, $a0, 0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E78u; }
        if (ctx->pc != 0x159E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E78u; }
        if (ctx->pc != 0x159E78u) { return; }
    }
    ctx->pc = 0x159E78u;
    // 0x159e78: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x159e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159e7c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159e80: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x159e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x159e84: 0x24842d10  addiu       $a0, $a0, 0x2D10
    ctx->pc = 0x159e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11536));
    // 0x159e88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x159e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159e8c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x159e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x159e90: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x159e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x159e94: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159E94u;
    SET_GPR_U32(ctx, 31, 0x159E9Cu);
    ctx->pc = 0x159E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E94u;
            // 0x159e98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E9Cu; }
        if (ctx->pc != 0x159E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E9Cu; }
        if (ctx->pc != 0x159E9Cu) { return; }
    }
    ctx->pc = 0x159E9Cu;
    // 0x159e9c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159ea0: 0x27b400f4  addiu       $s4, $sp, 0xF4
    ctx->pc = 0x159ea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x159ea4: 0x24422d40  addiu       $v0, $v0, 0x2D40
    ctx->pc = 0x159ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11584));
    // 0x159ea8: 0x27b300fc  addiu       $s3, $sp, 0xFC
    ctx->pc = 0x159ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x159eac: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x159eacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x159eb0: 0x27b200f8  addiu       $s2, $sp, 0xF8
    ctx->pc = 0x159eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x159eb4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x159eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x159eb8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x159eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x159ebc: 0x24429c50  addiu       $v0, $v0, -0x63B0
    ctx->pc = 0x159ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941776));
    // 0x159ec0: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x159ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x159ec4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x159ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x159ec8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159ecc: 0x24422d00  addiu       $v0, $v0, 0x2D00
    ctx->pc = 0x159eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11520));
    // 0x159ed0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x159ED0u;
    SET_GPR_U32(ctx, 31, 0x159ED8u);
    ctx->pc = 0x159ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159ED0u;
            // 0x159ed4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ED8u; }
        if (ctx->pc != 0x159ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159ED8u; }
        if (ctx->pc != 0x159ED8u) { return; }
    }
    ctx->pc = 0x159ED8u;
    // 0x159ed8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x159ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x159edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159ee0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x159ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159ee4: 0xc056034  jal         func_1580D0
    ctx->pc = 0x159EE4u;
    SET_GPR_U32(ctx, 31, 0x159EECu);
    ctx->pc = 0x159EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159EE4u;
            // 0x159ee8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EECu; }
        if (ctx->pc != 0x159EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EECu; }
        if (ctx->pc != 0x159EECu) { return; }
    }
    ctx->pc = 0x159EECu;
    // 0x159eec: 0xc056030  jal         func_1580C0
    ctx->pc = 0x159EECu;
    SET_GPR_U32(ctx, 31, 0x159EF4u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EF4u; }
        if (ctx->pc != 0x159EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EF4u; }
        if (ctx->pc != 0x159EF4u) { return; }
    }
    ctx->pc = 0x159EF4u;
    // 0x159ef4: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x159EF4u;
    SET_GPR_U32(ctx, 31, 0x159EFCu);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EFCu; }
        if (ctx->pc != 0x159EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EFCu; }
        if (ctx->pc != 0x159EFCu) { return; }
    }
    ctx->pc = 0x159EFCu;
    // 0x159efc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x159efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x159f00: 0xc05c00c  jal         func_170030
    ctx->pc = 0x159F00u;
    SET_GPR_U32(ctx, 31, 0x159F08u);
    ctx->pc = 0x159F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F00u;
            // 0x159f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F08u; }
        if (ctx->pc != 0x159F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F08u; }
        if (ctx->pc != 0x159F08u) { return; }
    }
    ctx->pc = 0x159F08u;
    // 0x159f08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x159f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159f0c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159f10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f18: 0x24842dc0  addiu       $a0, $a0, 0x2DC0
    ctx->pc = 0x159f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11712));
    // 0x159f1c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x159f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x159f20: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x159f20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x159f24: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x159f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159f28: 0x24a2ff5c  addiu       $v0, $a1, -0xA4
    ctx->pc = 0x159f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967132));
    // 0x159f2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159f30: 0x2462ff54  addiu       $v0, $v1, -0xAC
    ctx->pc = 0x159f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x159f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f38: 0x0  nop
    ctx->pc = 0x159f38u;
    // NOP
    // 0x159f3c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x159f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x159f40: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159F40u;
    SET_GPR_U32(ctx, 31, 0x159F48u);
    ctx->pc = 0x159F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F40u;
            // 0x159f44: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F48u; }
        if (ctx->pc != 0x159F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F48u; }
        if (ctx->pc != 0x159F48u) { return; }
    }
    ctx->pc = 0x159F48u;
    // 0x159f48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x159f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159f4c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x159f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x159f50: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x159f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x159f54: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x159f54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x159f58: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x159f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x159f5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x159f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x159f60: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159f64: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x159f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x159f68: 0x24842dd0  addiu       $a0, $a0, 0x2DD0
    ctx->pc = 0x159f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11728));
    // 0x159f6c: 0x24c6ff5c  addiu       $a2, $a2, -0xA4
    ctx->pc = 0x159f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967132));
    // 0x159f70: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x159f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x159f74: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x159f74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f78: 0x2463ff54  addiu       $v1, $v1, -0xAC
    ctx->pc = 0x159f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x159f7c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x159f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x159f80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x159f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f88: 0xc056038  jal         func_1580E0
    ctx->pc = 0x159F88u;
    SET_GPR_U32(ctx, 31, 0x159F90u);
    ctx->pc = 0x159F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F88u;
            // 0x159f8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F90u; }
        if (ctx->pc != 0x159F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F90u; }
        if (ctx->pc != 0x159F90u) { return; }
    }
    ctx->pc = 0x159F90u;
    // 0x159f90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x159f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159f94: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159f98: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x159f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159f9c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159F9Cu;
    SET_GPR_U32(ctx, 31, 0x159FA4u);
    ctx->pc = 0x159FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F9Cu;
            // 0x159fa0: 0x24842d80  addiu       $a0, $a0, 0x2D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FA4u; }
        if (ctx->pc != 0x159FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FA4u; }
        if (ctx->pc != 0x159FA4u) { return; }
    }
    ctx->pc = 0x159FA4u;
    // 0x159fa4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x159fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159fa8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x159fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x159fac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x159facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x159fb0: 0x24842d90  addiu       $a0, $a0, 0x2D90
    ctx->pc = 0x159fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11664));
    // 0x159fb4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x159fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159fb8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x159fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x159fbc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x159fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x159fc0: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x159FC0u;
    SET_GPR_U32(ctx, 31, 0x159FC8u);
    ctx->pc = 0x159FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159FC0u;
            // 0x159fc4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FC8u; }
        if (ctx->pc != 0x159FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FC8u; }
        if (ctx->pc != 0x159FC8u) { return; }
    }
    ctx->pc = 0x159FC8u;
    // 0x159fc8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159fcc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x159fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x159fd0: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x159fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x159fd4: 0x24639c48  addiu       $v1, $v1, -0x63B8
    ctx->pc = 0x159fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941768));
    // 0x159fd8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x159fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x159fdc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x159fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x159fe0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x159fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x159fe4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x159fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x159fe8: 0x24422d80  addiu       $v0, $v0, 0x2D80
    ctx->pc = 0x159fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
    // 0x159fec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x159FECu;
    SET_GPR_U32(ctx, 31, 0x159FF4u);
    ctx->pc = 0x159FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159FECu;
            // 0x159ff0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FF4u; }
        if (ctx->pc != 0x159FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FF4u; }
        if (ctx->pc != 0x159FF4u) { return; }
    }
    ctx->pc = 0x159FF4u;
    // 0x159ff4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x159ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x159ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159ffc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x159ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a000: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15A000u;
    SET_GPR_U32(ctx, 31, 0x15A008u);
    ctx->pc = 0x15A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A000u;
            // 0x15a004: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A008u; }
        if (ctx->pc != 0x15A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A008u; }
        if (ctx->pc != 0x15A008u) { return; }
    }
    ctx->pc = 0x15A008u;
    // 0x15a008: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15A008u;
    SET_GPR_U32(ctx, 31, 0x15A010u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A010u; }
        if (ctx->pc != 0x15A010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A010u; }
        if (ctx->pc != 0x15A010u) { return; }
    }
    ctx->pc = 0x15A010u;
    // 0x15a010: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15A010u;
    SET_GPR_U32(ctx, 31, 0x15A018u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A018u; }
        if (ctx->pc != 0x15A018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A018u; }
        if (ctx->pc != 0x15A018u) { return; }
    }
    ctx->pc = 0x15A018u;
    // 0x15a018: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a01c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x15a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x15a020: 0x8c232ce0  lw          $v1, 0x2CE0($at)
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11488)));
    // 0x15a024: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x15a024u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x15a028: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15a02c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15a030: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x15a030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x15a034: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a038: 0x0  nop
    ctx->pc = 0x15a038u;
    // NOP
    // 0x15a03c: 0x0  nop
    ctx->pc = 0x15a03cu;
    // NOP
    // 0x15a040: 0x1010  mfhi        $v0
    ctx->pc = 0x15a040u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15a044: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a044u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15a048: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x15a048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x15a04c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x15A04Cu;
    SET_GPR_U32(ctx, 31, 0x15A054u);
    ctx->pc = 0x15A050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A04Cu;
            // 0x15a050: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A054u; }
        if (ctx->pc != 0x15A054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A054u; }
        if (ctx->pc != 0x15A054u) { return; }
    }
    ctx->pc = 0x15A054u;
    // 0x15a054: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x15a054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x15a058: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x15a058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x15a05c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15a05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15a060: 0xc060a44  jal         func_182910
    ctx->pc = 0x15A060u;
    SET_GPR_U32(ctx, 31, 0x15A068u);
    ctx->pc = 0x15A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A060u;
            // 0x15a064: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A068u; }
        if (ctx->pc != 0x15A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A068u; }
        if (ctx->pc != 0x15A068u) { return; }
    }
    ctx->pc = 0x15A068u;
    // 0x15a068: 0x100002cb  b           . + 4 + (0x2CB << 2)
    ctx->pc = 0x15A068u;
    {
        const bool branch_taken_0x15a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a068) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15A070u;
label_15a070:
    // 0x15a070: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a074: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x15a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x15a078: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A078u;
    {
        const bool branch_taken_0x15a078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A078u;
            // 0x15a07c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a078) {
            ctx->pc = 0x15A098u;
            goto label_15a098;
        }
    }
    ctx->pc = 0x15A080u;
    // 0x15a080: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x15a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x15a084: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A084u;
    {
        const bool branch_taken_0x15a084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a084) {
            ctx->pc = 0x15A098u;
            goto label_15a098;
        }
    }
    ctx->pc = 0x15A08Cu;
    // 0x15a08c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a090: 0xac203508  sw          $zero, 0x3508($at)
    ctx->pc = 0x15a090u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 0));
    // 0x15a094: 0x0  nop
    ctx->pc = 0x15a094u;
    // NOP
label_15a098:
    // 0x15a098: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a09c: 0xac203538  sw          $zero, 0x3538($at)
    ctx->pc = 0x15a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13624), GPR_U32(ctx, 0));
    // 0x15a0a0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x15a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x15a0a4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15a0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15a0a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0ac: 0xc06369c  jal         func_18DA70
    ctx->pc = 0x15A0ACu;
    SET_GPR_U32(ctx, 31, 0x15A0B4u);
    ctx->pc = 0x15A0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0ACu;
            // 0x15a0b0: 0xac229bb8  sw          $v0, -0x6448($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA70u;
    if (runtime->hasFunction(0x18DA70u)) {
        auto targetFn = runtime->lookupFunction(0x18DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0B4u; }
        if (ctx->pc != 0x15A0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayer_0x18da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0B4u; }
        if (ctx->pc != 0x15A0B4u) { return; }
    }
    ctx->pc = 0x15A0B4u;
    // 0x15a0b4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a0bc: 0x8c253548  lw          $a1, 0x3548($at)
    ctx->pc = 0x15a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13640)));
    // 0x15a0c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a0c8: 0xac223530  sw          $v0, 0x3530($at)
    ctx->pc = 0x15a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13616), GPR_U32(ctx, 2));
    // 0x15a0cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a0d0: 0x8c273550  lw          $a3, 0x3550($at)
    ctx->pc = 0x15a0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13648)));
    // 0x15a0d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a0d8: 0x8c283558  lw          $t0, 0x3558($at)
    ctx->pc = 0x15a0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13656)));
    // 0x15a0dc: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15A0DCu;
    SET_GPR_U32(ctx, 31, 0x15A0E4u);
    ctx->pc = 0x15A0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0DCu;
            // 0x15a0e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0E4u; }
        if (ctx->pc != 0x15A0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0E4u; }
        if (ctx->pc != 0x15A0E4u) { return; }
    }
    ctx->pc = 0x15A0E4u;
    // 0x15a0e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0e8: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x15A0E8u;
    SET_GPR_U32(ctx, 31, 0x15A0F0u);
    ctx->pc = 0x15A0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0E8u;
            // 0x15a0ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0F0u; }
        if (ctx->pc != 0x15A0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0F0u; }
        if (ctx->pc != 0x15A0F0u) { return; }
    }
    ctx->pc = 0x15A0F0u;
    // 0x15a0f0: 0x100002a9  b           . + 4 + (0x2A9 << 2)
    ctx->pc = 0x15A0F0u;
    {
        const bool branch_taken_0x15a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a0f0) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15A0F8u;
label_15a0f8:
    // 0x15a0f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a0fc: 0x8c242ce4  lw          $a0, 0x2CE4($at)
    ctx->pc = 0x15a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a100: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A100u;
    {
        const bool branch_taken_0x15a100 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A100u;
            // 0x15a104: 0x3083000f  andi        $v1, $a0, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a100) {
            ctx->pc = 0x15A114u;
            goto label_15a114;
        }
    }
    ctx->pc = 0x15A108u;
    // 0x15a108: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A108u;
    {
        const bool branch_taken_0x15a108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a108) {
            ctx->pc = 0x15A114u;
            goto label_15a114;
        }
    }
    ctx->pc = 0x15A110u;
    // 0x15a110: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x15a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_15a114:
    // 0x15a114: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a118: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15a118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15a11c: 0x8c242cec  lw          $a0, 0x2CEC($at)
    ctx->pc = 0x15a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11500)));
    // 0x15a120: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15a120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15a124: 0xa0239c57  sb          $v1, -0x63A9($at)
    ctx->pc = 0x15a124u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294941783), (uint8_t)GPR_U32(ctx, 3));
    // 0x15a128: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15a12c: 0x1083027a  beq         $a0, $v1, . + 4 + (0x27A << 2)
    ctx->pc = 0x15A12Cu;
    {
        const bool branch_taken_0x15a12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a12c) {
            ctx->pc = 0x15AB18u;
            goto label_15ab18;
        }
    }
    ctx->pc = 0x15A134u;
    // 0x15a134: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a138: 0x10830183  beq         $a0, $v1, . + 4 + (0x183 << 2)
    ctx->pc = 0x15A138u;
    {
        const bool branch_taken_0x15a138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A138u;
            // 0x15a13c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a138) {
            ctx->pc = 0x15A748u;
            goto label_15a748;
        }
    }
    ctx->pc = 0x15A140u;
    // 0x15a140: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x15A140u;
    {
        const bool branch_taken_0x15a140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a140) {
            ctx->pc = 0x15A318u;
            goto label_15a318;
        }
    }
    ctx->pc = 0x15A148u;
    // 0x15a148: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A148u;
    {
        const bool branch_taken_0x15a148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a148) {
            ctx->pc = 0x15A158u;
            goto label_15a158;
        }
    }
    ctx->pc = 0x15A150u;
    // 0x15a150: 0x10000291  b           . + 4 + (0x291 << 2)
    ctx->pc = 0x15A150u;
    {
        const bool branch_taken_0x15a150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a150) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15A158u;
label_15a158:
    // 0x15a158: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x15a158u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x15a15c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15a15cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a160: 0x26529c30  addiu       $s2, $s2, -0x63D0
    ctx->pc = 0x15a160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941744));
    // 0x15a164: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x15a164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a168: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x15a168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15a16c: 0x0  nop
    ctx->pc = 0x15a16cu;
    // NOP
label_15a170:
    // 0x15a170: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x15a170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15a174: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15A174u;
    SET_GPR_U32(ctx, 31, 0x15A17Cu);
    ctx->pc = 0x15A178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A174u;
            // 0x15a178: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A17Cu; }
        if (ctx->pc != 0x15A17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A17Cu; }
        if (ctx->pc != 0x15A17Cu) { return; }
    }
    ctx->pc = 0x15A17Cu;
    // 0x15a17c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x15a17cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a180: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a184: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x15a184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15a188: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a18c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15a190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15a190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a194: 0x8c292cdc  lw          $t1, 0x2CDC($at)
    ctx->pc = 0x15a194u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11484)));
    // 0x15a198: 0x3c054974  lui         $a1, 0x4974
    ctx->pc = 0x15a198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18804 << 16));
    // 0x15a19c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x15a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x15a1a0: 0x24843000  addiu       $a0, $a0, 0x3000
    ctx->pc = 0x15a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12288));
    // 0x15a1a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15a1a8: 0x34a22400  ori         $v0, $a1, 0x2400
    ctx->pc = 0x15a1a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a1ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a1b0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x15a1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x15a1b4: 0x2872818  mult        $a1, $s4, $a3
    ctx->pc = 0x15a1b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a1b8: 0x24c2ff54  addiu       $v0, $a2, -0xAC
    ctx->pc = 0x15a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967124));
    // 0x15a1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a1c0: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x15a1c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a1c8: 0x0  nop
    ctx->pc = 0x15a1c8u;
    // NOP
    // 0x15a1cc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x15a1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x15a1d0: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A1D0u;
    SET_GPR_U32(ctx, 31, 0x15A1D8u);
    ctx->pc = 0x15A1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1D0u;
            // 0x15a1d4: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1D8u; }
        if (ctx->pc != 0x15A1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A1D8u; }
        if (ctx->pc != 0x15A1D8u) { return; }
    }
    ctx->pc = 0x15A1D8u;
    // 0x15a1d8: 0x8e6a0014  lw          $t2, 0x14($s3)
    ctx->pc = 0x15a1d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x15a1dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a1e0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a1e4: 0x10a900  sll         $s5, $s0, 4
    ctx->pc = 0x15a1e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15a1e8: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x15a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x15a1ec: 0x8c292cdc  lw          $t1, 0x2CDC($at)
    ctx->pc = 0x15a1ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11484)));
    // 0x15a1f0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x15a1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15a1f4: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15a1f8: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x15a1fc: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x15a1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x15a200: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15a200u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a204: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x15a204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x15a208: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a20c: 0x28a3818  mult        $a3, $s4, $t2
    ctx->pc = 0x15a20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a210: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x15a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x15a214: 0x1424021  addu        $t0, $t2, $v0
    ctx->pc = 0x15a214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x15a218: 0x24c2ff54  addiu       $v0, $a2, -0xAC
    ctx->pc = 0x15a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967124));
    // 0x15a21c: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x15a21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x15a220: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15a224: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x15a224u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a22c: 0x0  nop
    ctx->pc = 0x15a22cu;
    // NOP
    // 0x15a230: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15a230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15a234: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A234u;
    SET_GPR_U32(ctx, 31, 0x15A23Cu);
    ctx->pc = 0x15A238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A234u;
            // 0x15a238: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A23Cu; }
        if (ctx->pc != 0x15A23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A23Cu; }
        if (ctx->pc != 0x15A23Cu) { return; }
    }
    ctx->pc = 0x15A23Cu;
    // 0x15a23c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x15a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x15a240: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a244: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x15a244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15a248: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x15a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x15a24c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A24Cu;
    SET_GPR_U32(ctx, 31, 0x15A254u);
    ctx->pc = 0x15A250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A24Cu;
            // 0x15a250: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A254u; }
        if (ctx->pc != 0x15A254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A254u; }
        if (ctx->pc != 0x15A254u) { return; }
    }
    ctx->pc = 0x15A254u;
    // 0x15a254: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a258: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x15a258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x15a25c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x15a260: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x15a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x15a264: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x15a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15a268: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x15a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15a26c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x15a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x15a270: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15a270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a274: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A274u;
    SET_GPR_U32(ctx, 31, 0x15A27Cu);
    ctx->pc = 0x15A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A274u;
            // 0x15a278: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A27Cu; }
        if (ctx->pc != 0x15A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A27Cu; }
        if (ctx->pc != 0x15A27Cu) { return; }
    }
    ctx->pc = 0x15A27Cu;
    // 0x15a27c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15a27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15a280: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15a280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x15a284: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x15a284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15a288: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x15a288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x15a28c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x15A28Cu;
    {
        const bool branch_taken_0x15a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A28Cu;
            // 0x15a290: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a28c) {
            ctx->pc = 0x15A170u;
            goto label_15a170;
        }
    }
    ctx->pc = 0x15A294u;
    // 0x15a294: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a298: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15a298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15a29c: 0x24423100  addiu       $v0, $v0, 0x3100
    ctx->pc = 0x15a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
    // 0x15a2a0: 0x24639c28  addiu       $v1, $v1, -0x63D8
    ctx->pc = 0x15a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941736));
    // 0x15a2a4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x15a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x15a2a8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15a2ac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a2b0: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x15a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x15a2b4: 0x24422f00  addiu       $v0, $v0, 0x2F00
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12032));
    // 0x15a2b8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15A2B8u;
    SET_GPR_U32(ctx, 31, 0x15A2C0u);
    ctx->pc = 0x15A2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2B8u;
            // 0x15a2bc: 0xafa200f8  sw          $v0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2C0u; }
        if (ctx->pc != 0x15A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2C0u; }
        if (ctx->pc != 0x15A2C0u) { return; }
    }
    ctx->pc = 0x15A2C0u;
    // 0x15a2c0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15a2c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a2c8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a2cc: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15A2CCu;
    SET_GPR_U32(ctx, 31, 0x15A2D4u);
    ctx->pc = 0x15A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2CCu;
            // 0x15a2d0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2D4u; }
        if (ctx->pc != 0x15A2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2D4u; }
        if (ctx->pc != 0x15A2D4u) { return; }
    }
    ctx->pc = 0x15A2D4u;
    // 0x15a2d4: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15A2D4u;
    SET_GPR_U32(ctx, 31, 0x15A2DCu);
    ctx->pc = 0x15A2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A2D4u;
            // 0x15a2d8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2DCu; }
        if (ctx->pc != 0x15A2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2DCu; }
        if (ctx->pc != 0x15A2DCu) { return; }
    }
    ctx->pc = 0x15A2DCu;
    // 0x15a2dc: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15A2DCu;
    SET_GPR_U32(ctx, 31, 0x15A2E4u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2E4u; }
        if (ctx->pc != 0x15A2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A2E4u; }
        if (ctx->pc != 0x15A2E4u) { return; }
    }
    ctx->pc = 0x15A2E4u;
    // 0x15a2e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a2e8: 0x8c232cdc  lw          $v1, 0x2CDC($at)
    ctx->pc = 0x15a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11484)));
    // 0x15a2ec: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x15a2ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x15a2f0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A2F0u;
    {
        const bool branch_taken_0x15a2f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a2f0) {
            ctx->pc = 0x15A308u;
            goto label_15a308;
        }
    }
    ctx->pc = 0x15A2F8u;
    // 0x15a2f8: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x15a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x15a2fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a300: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x15A300u;
    {
        const bool branch_taken_0x15a300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A300u;
            // 0x15a304: 0xac232cdc  sw          $v1, 0x2CDC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a300) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15A308u;
label_15a308:
    // 0x15a308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a30c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a310: 0x10000221  b           . + 4 + (0x221 << 2)
    ctx->pc = 0x15A310u;
    {
        const bool branch_taken_0x15a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A310u;
            // 0x15a314: 0xac232cec  sw          $v1, 0x2CEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11500), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a310) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15A318u;
label_15a318:
    // 0x15a318: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a31c: 0x8c222ce4  lw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a320: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a324: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a328: 0xac222ce4  sw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11492), GPR_U32(ctx, 2));
    // 0x15a32c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a330: 0x8c222ce4  lw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a334: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A334u;
    {
        const bool branch_taken_0x15a334 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x15A338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A334u;
            // 0x15a338: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a334) {
            ctx->pc = 0x15A340u;
            goto label_15a340;
        }
    }
    ctx->pc = 0x15A33Cu;
    // 0x15a33c: 0xac202ce4  sw          $zero, 0x2CE4($at)
    ctx->pc = 0x15a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11492), GPR_U32(ctx, 0));
label_15a340:
    // 0x15a340: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a344: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x15a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x15a348: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A348u;
    {
        const bool branch_taken_0x15a348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A348u;
            // 0x15a34c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a348) {
            ctx->pc = 0x15A370u;
            goto label_15a370;
        }
    }
    ctx->pc = 0x15A350u;
    // 0x15a350: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15a350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a354: 0x8c222cfc  lw          $v0, 0x2CFC($at)
    ctx->pc = 0x15a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11516)));
    // 0x15a358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a35c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a360: 0xc05d110  jal         func_174440
    ctx->pc = 0x15A360u;
    SET_GPR_U32(ctx, 31, 0x15A368u);
    ctx->pc = 0x15A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A360u;
            // 0x15a364: 0xac222cfc  sw          $v0, 0x2CFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A368u; }
        if (ctx->pc != 0x15A368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A368u; }
        if (ctx->pc != 0x15A368u) { return; }
    }
    ctx->pc = 0x15A368u;
    // 0x15a368: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15A368u;
    {
        const bool branch_taken_0x15a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a368) {
            ctx->pc = 0x15A398u;
            goto label_15a398;
        }
    }
    ctx->pc = 0x15A370u;
label_15a370:
    // 0x15a370: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a374: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x15a378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A378u;
    {
        const bool branch_taken_0x15a378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A378u;
            // 0x15a37c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a378) {
            ctx->pc = 0x15A398u;
            goto label_15a398;
        }
    }
    ctx->pc = 0x15A380u;
    // 0x15a380: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a384: 0x8c222cfc  lw          $v0, 0x2CFC($at)
    ctx->pc = 0x15a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11516)));
    // 0x15a388: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15a38c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a390: 0xc05d110  jal         func_174440
    ctx->pc = 0x15A390u;
    SET_GPR_U32(ctx, 31, 0x15A398u);
    ctx->pc = 0x15A394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A390u;
            // 0x15a394: 0xac222cfc  sw          $v0, 0x2CFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A398u; }
        if (ctx->pc != 0x15A398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A398u; }
        if (ctx->pc != 0x15A398u) { return; }
    }
    ctx->pc = 0x15A398u;
label_15a398:
    // 0x15a398: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a39c: 0x8c222cfc  lw          $v0, 0x2CFC($at)
    ctx->pc = 0x15a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11516)));
    // 0x15a3a0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x15a3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15a3a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A3A4u;
    {
        const bool branch_taken_0x15a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3A4u;
            // 0x15a3a8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3a4) {
            ctx->pc = 0x15A3B0u;
            goto label_15a3b0;
        }
    }
    ctx->pc = 0x15A3ACu;
    // 0x15a3ac: 0xac202cfc  sw          $zero, 0x2CFC($at)
    ctx->pc = 0x15a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11516), GPR_U32(ctx, 0));
label_15a3b0:
    // 0x15a3b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a3b4: 0x8c222cfc  lw          $v0, 0x2CFC($at)
    ctx->pc = 0x15a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11516)));
    // 0x15a3b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A3B8u;
    {
        const bool branch_taken_0x15a3b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15A3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3B8u;
            // 0x15a3bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3b8) {
            ctx->pc = 0x15A3C8u;
            goto label_15a3c8;
        }
    }
    ctx->pc = 0x15A3C0u;
    // 0x15a3c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a3c4: 0xac222cfc  sw          $v0, 0x2CFC($at)
    ctx->pc = 0x15a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11516), GPR_U32(ctx, 2));
label_15a3c8:
    // 0x15a3c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a3cc: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x15a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x15a3d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A3D0u;
    {
        const bool branch_taken_0x15a3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3D0u;
            // 0x15a3d4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3d0) {
            ctx->pc = 0x15A3F8u;
            goto label_15a3f8;
        }
    }
    ctx->pc = 0x15A3D8u;
    // 0x15a3d8: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x15a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x15a3dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A3DCu;
    {
        const bool branch_taken_0x15a3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a3dc) {
            ctx->pc = 0x15A3F8u;
            goto label_15a3f8;
        }
    }
    ctx->pc = 0x15A3E4u;
    // 0x15a3e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a3e8: 0x8c222ce4  lw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a3ec: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15A3ECu;
    {
        const bool branch_taken_0x15a3ec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15a3ec) {
            ctx->pc = 0x15A420u;
            goto label_15a420;
        }
    }
    ctx->pc = 0x15A3F4u;
    // 0x15a3f4: 0x0  nop
    ctx->pc = 0x15a3f4u;
    // NOP
label_15a3f8:
    // 0x15a3f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a3fc: 0x8c232cfc  lw          $v1, 0x2CFC($at)
    ctx->pc = 0x15a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11516)));
    // 0x15a400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a404: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15a404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a408: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a40c: 0xac222cec  sw          $v0, 0x2CEC($at)
    ctx->pc = 0x15a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11500), GPR_U32(ctx, 2));
    // 0x15a410: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a414: 0xc05d110  jal         func_174440
    ctx->pc = 0x15A414u;
    SET_GPR_U32(ctx, 31, 0x15A41Cu);
    ctx->pc = 0x15A418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A414u;
            // 0x15a418: 0xac23355c  sw          $v1, 0x355C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A41Cu; }
        if (ctx->pc != 0x15A41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A41Cu; }
        if (ctx->pc != 0x15A41Cu) { return; }
    }
    ctx->pc = 0x15A41Cu;
    // 0x15a41c: 0x0  nop
    ctx->pc = 0x15a41cu;
    // NOP
label_15a420:
    // 0x15a420: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x15a420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x15a424: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15A424u;
    SET_GPR_U32(ctx, 31, 0x15A42Cu);
    ctx->pc = 0x15A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A424u;
            // 0x15a428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A42Cu; }
        if (ctx->pc != 0x15A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A42Cu; }
        if (ctx->pc != 0x15A42Cu) { return; }
    }
    ctx->pc = 0x15A42Cu;
    // 0x15a42c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a430: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a434: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15a434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15a438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a43c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15a440: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15a440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15a444: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a448: 0x24842d60  addiu       $a0, $a0, 0x2D60
    ctx->pc = 0x15a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11616));
    // 0x15a44c: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x15a44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x15a450: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x15a450u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a454: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a458: 0x8c232cfc  lw          $v1, 0x2CFC($at)
    ctx->pc = 0x15a458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11516)));
    // 0x15a45c: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x15a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x15a460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a464: 0x0  nop
    ctx->pc = 0x15a464u;
    // NOP
    // 0x15a468: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x15a468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x15a46c: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x15a46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a470: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x15a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15a474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a478: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A478u;
    SET_GPR_U32(ctx, 31, 0x15A480u);
    ctx->pc = 0x15A47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A478u;
            // 0x15a47c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A480u; }
        if (ctx->pc != 0x15A480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A480u; }
        if (ctx->pc != 0x15A480u) { return; }
    }
    ctx->pc = 0x15A480u;
    // 0x15a480: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15a480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x15a484: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a488: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15a488u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a48c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a490: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a494: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a498: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x15a498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15a49c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a4a0: 0x8c252cfc  lw          $a1, 0x2CFC($at)
    ctx->pc = 0x15a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11516)));
    // 0x15a4a4: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x15a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x15a4a8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15a4ac: 0x2463ff54  addiu       $v1, $v1, -0xAC
    ctx->pc = 0x15a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x15a4b0: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x15a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x15a4b4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15a4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15a4b8: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x15a4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a4bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a4c4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x15a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a4c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a4cc: 0x0  nop
    ctx->pc = 0x15a4ccu;
    // NOP
    // 0x15a4d0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x15a4d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x15a4d4: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A4D4u;
    SET_GPR_U32(ctx, 31, 0x15A4DCu);
    ctx->pc = 0x15A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4D4u;
            // 0x15a4d8: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4DCu; }
        if (ctx->pc != 0x15A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4DCu; }
        if (ctx->pc != 0x15A4DCu) { return; }
    }
    ctx->pc = 0x15A4DCu;
    // 0x15a4dc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15a4e0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a4e4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15a4e8: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A4E8u;
    SET_GPR_U32(ctx, 31, 0x15A4F0u);
    ctx->pc = 0x15A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4E8u;
            // 0x15a4ec: 0x24842d20  addiu       $a0, $a0, 0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4F0u; }
        if (ctx->pc != 0x15A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A4F0u; }
        if (ctx->pc != 0x15A4F0u) { return; }
    }
    ctx->pc = 0x15A4F0u;
    // 0x15a4f0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15a4f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a4f8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15a4fc: 0x24842d30  addiu       $a0, $a0, 0x2D30
    ctx->pc = 0x15a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11568));
    // 0x15a500: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15a500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15a504: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15a508: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15a508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a50c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A50Cu;
    SET_GPR_U32(ctx, 31, 0x15A514u);
    ctx->pc = 0x15A510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A50Cu;
            // 0x15a510: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A514u; }
        if (ctx->pc != 0x15A514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A514u; }
        if (ctx->pc != 0x15A514u) { return; }
    }
    ctx->pc = 0x15A514u;
    // 0x15a514: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a518: 0x27b600f4  addiu       $s6, $sp, 0xF4
    ctx->pc = 0x15a518u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x15a51c: 0x24422d60  addiu       $v0, $v0, 0x2D60
    ctx->pc = 0x15a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11616));
    // 0x15a520: 0x27b700fc  addiu       $s7, $sp, 0xFC
    ctx->pc = 0x15a520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x15a524: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x15a524u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x15a528: 0x27be00f8  addiu       $fp, $sp, 0xF8
    ctx->pc = 0x15a528u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x15a52c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15a530: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15a534: 0x24429c54  addiu       $v0, $v0, -0x63AC
    ctx->pc = 0x15a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941780));
    // 0x15a538: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x15a538u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x15a53c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a540: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x15a540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x15a544: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15A544u;
    SET_GPR_U32(ctx, 31, 0x15A54Cu);
    ctx->pc = 0x15A548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A544u;
            // 0x15a548: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A54Cu; }
        if (ctx->pc != 0x15A54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A54Cu; }
        if (ctx->pc != 0x15A54Cu) { return; }
    }
    ctx->pc = 0x15A54Cu;
    // 0x15a54c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x15a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15a550: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15a550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15a554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a558: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15a558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a55c: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15A55Cu;
    SET_GPR_U32(ctx, 31, 0x15A564u);
    ctx->pc = 0x15A560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A55Cu;
            // 0x15a560: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A564u; }
        if (ctx->pc != 0x15A564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A564u; }
        if (ctx->pc != 0x15A564u) { return; }
    }
    ctx->pc = 0x15A564u;
    // 0x15a564: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15A564u;
    SET_GPR_U32(ctx, 31, 0x15A56Cu);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A56Cu; }
        if (ctx->pc != 0x15A56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A56Cu; }
        if (ctx->pc != 0x15A56Cu) { return; }
    }
    ctx->pc = 0x15A56Cu;
    // 0x15a56c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15A56Cu;
    SET_GPR_U32(ctx, 31, 0x15A574u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A574u; }
        if (ctx->pc != 0x15A574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A574u; }
        if (ctx->pc != 0x15A574u) { return; }
    }
    ctx->pc = 0x15A574u;
    // 0x15a574: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x15a574u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x15a578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15a578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a57c: 0x26b59c30  addiu       $s5, $s5, -0x63D0
    ctx->pc = 0x15a57cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941744));
    // 0x15a580: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x15a580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a584: 0x24130011  addiu       $s3, $zero, 0x11
    ctx->pc = 0x15a584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_15a588:
    // 0x15a588: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x15a588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15a58c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15A58Cu;
    SET_GPR_U32(ctx, 31, 0x15A594u);
    ctx->pc = 0x15A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A58Cu;
            // 0x15a590: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A594u; }
        if (ctx->pc != 0x15A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A594u; }
        if (ctx->pc != 0x15A594u) { return; }
    }
    ctx->pc = 0x15A594u;
    // 0x15a594: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15a594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a598: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a59c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15a5a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5a4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15a5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15a5a8: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x15a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x15a5ac: 0x24843000  addiu       $a0, $a0, 0x3000
    ctx->pc = 0x15a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12288));
    // 0x15a5b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15a5b4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x15a5b8: 0x2263018  mult        $a2, $s1, $a2
    ctx->pc = 0x15a5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a5bc: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x15a5c0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15a5c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a5c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a5c8: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x15a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x15a5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a5d0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x15a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15a5d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a5d8: 0x0  nop
    ctx->pc = 0x15a5d8u;
    // NOP
    // 0x15a5dc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x15a5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x15a5e0: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A5E0u;
    SET_GPR_U32(ctx, 31, 0x15A5E8u);
    ctx->pc = 0x15A5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5E0u;
            // 0x15a5e4: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5E8u; }
        if (ctx->pc != 0x15A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5E8u; }
        if (ctx->pc != 0x15A5E8u) { return; }
    }
    ctx->pc = 0x15A5E8u;
    // 0x15a5e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a5ec: 0x8e090014  lw          $t1, 0x14($s0)
    ctx->pc = 0x15a5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15a5f0: 0x139100  sll         $s2, $s3, 4
    ctx->pc = 0x15a5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15a5f4: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x15a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x15a5f8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x15a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15a5fc: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x15a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a600: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x15a604: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15a604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a608: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15a608u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a60c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x15a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15a610: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a614: 0x2293818  mult        $a3, $s1, $t1
    ctx->pc = 0x15a614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a618: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x15a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x15a61c: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x15a61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x15a620: 0x24c2ff54  addiu       $v0, $a2, -0xAC
    ctx->pc = 0x15a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967124));
    // 0x15a624: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15a628: 0x1072821  addu        $a1, $t0, $a3
    ctx->pc = 0x15a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x15a62c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x15a62cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a634: 0x0  nop
    ctx->pc = 0x15a634u;
    // NOP
    // 0x15a638: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15a638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15a63c: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A63Cu;
    SET_GPR_U32(ctx, 31, 0x15A644u);
    ctx->pc = 0x15A640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A63Cu;
            // 0x15a640: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A644u; }
        if (ctx->pc != 0x15A644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A644u; }
        if (ctx->pc != 0x15A644u) { return; }
    }
    ctx->pc = 0x15A644u;
    // 0x15a644: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15a644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15a648: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a64c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15a650: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x15a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x15a654: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A654u;
    SET_GPR_U32(ctx, 31, 0x15A65Cu);
    ctx->pc = 0x15A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A654u;
            // 0x15a658: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A65Cu; }
        if (ctx->pc != 0x15A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A65Cu; }
        if (ctx->pc != 0x15A65Cu) { return; }
    }
    ctx->pc = 0x15A65Cu;
    // 0x15a65c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a660: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15a664: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x15a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x15a668: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15a668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15a66c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x15a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15a670: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15a674: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15a678: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15a678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a67c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A67Cu;
    SET_GPR_U32(ctx, 31, 0x15A684u);
    ctx->pc = 0x15A680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A67Cu;
            // 0x15a680: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A684u; }
        if (ctx->pc != 0x15A684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A684u; }
        if (ctx->pc != 0x15A684u) { return; }
    }
    ctx->pc = 0x15A684u;
    // 0x15a684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15a684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15a688: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x15a688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x15a68c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x15a68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15a690: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x15a694: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x15A694u;
    {
        const bool branch_taken_0x15a694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A694u;
            // 0x15a698: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a694) {
            ctx->pc = 0x15A588u;
            goto label_15a588;
        }
    }
    ctx->pc = 0x15A69Cu;
    // 0x15a69c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a6a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15a6a4: 0x24423100  addiu       $v0, $v0, 0x3100
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
    // 0x15a6a8: 0x24639c28  addiu       $v1, $v1, -0x63D8
    ctx->pc = 0x15a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941736));
    // 0x15a6ac: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x15a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x15a6b0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15a6b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a6b8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x15a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x15a6bc: 0x24422f00  addiu       $v0, $v0, 0x2F00
    ctx->pc = 0x15a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12032));
    // 0x15a6c0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15A6C0u;
    SET_GPR_U32(ctx, 31, 0x15A6C8u);
    ctx->pc = 0x15A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6C0u;
            // 0x15a6c4: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6C8u; }
        if (ctx->pc != 0x15A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6C8u; }
        if (ctx->pc != 0x15A6C8u) { return; }
    }
    ctx->pc = 0x15A6C8u;
    // 0x15a6c8: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x15a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15a6cc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15a6d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a6d4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15a6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a6d8: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15A6D8u;
    SET_GPR_U32(ctx, 31, 0x15A6E0u);
    ctx->pc = 0x15A6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6D8u;
            // 0x15a6dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6E0u; }
        if (ctx->pc != 0x15A6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6E0u; }
        if (ctx->pc != 0x15A6E0u) { return; }
    }
    ctx->pc = 0x15A6E0u;
    // 0x15a6e0: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15A6E0u;
    SET_GPR_U32(ctx, 31, 0x15A6E8u);
    ctx->pc = 0x15A6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6E0u;
            // 0x15a6e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6E8u; }
        if (ctx->pc != 0x15A6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6E8u; }
        if (ctx->pc != 0x15A6E8u) { return; }
    }
    ctx->pc = 0x15A6E8u;
    // 0x15a6e8: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15A6E8u;
    SET_GPR_U32(ctx, 31, 0x15A6F0u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6F0u; }
        if (ctx->pc != 0x15A6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A6F0u; }
        if (ctx->pc != 0x15A6F0u) { return; }
    }
    ctx->pc = 0x15A6F0u;
    // 0x15a6f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a6f4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x15a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x15a6f8: 0x8c232ce4  lw          $v1, 0x2CE4($at)
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a6fc: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x15a6fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x15a700: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15a704: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15a704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15a708: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x15a70c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a710: 0x0  nop
    ctx->pc = 0x15a710u;
    // NOP
    // 0x15a714: 0x0  nop
    ctx->pc = 0x15a714u;
    // NOP
    // 0x15a718: 0x1010  mfhi        $v0
    ctx->pc = 0x15a718u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15a71c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15a720: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x15a720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x15a724: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x15A724u;
    SET_GPR_U32(ctx, 31, 0x15A72Cu);
    ctx->pc = 0x15A728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A724u;
            // 0x15a728: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A72Cu; }
        if (ctx->pc != 0x15A72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A72Cu; }
        if (ctx->pc != 0x15A72Cu) { return; }
    }
    ctx->pc = 0x15A72Cu;
    // 0x15a72c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15a730: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x15a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x15a734: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15a734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15a738: 0xc060a44  jal         func_182910
    ctx->pc = 0x15A738u;
    SET_GPR_U32(ctx, 31, 0x15A740u);
    ctx->pc = 0x15A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A738u;
            // 0x15a73c: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A740u; }
        if (ctx->pc != 0x15A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A740u; }
        if (ctx->pc != 0x15A740u) { return; }
    }
    ctx->pc = 0x15A740u;
    // 0x15a740: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x15A740u;
    {
        const bool branch_taken_0x15a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a740) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15A748u;
label_15a748:
    // 0x15a748: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a74c: 0x8c222ce4  lw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a754: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a758: 0xac222ce4  sw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11492), GPR_U32(ctx, 2));
    // 0x15a75c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a760: 0x8c222ce4  lw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a764: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A764u;
    {
        const bool branch_taken_0x15a764 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x15A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A764u;
            // 0x15a768: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a764) {
            ctx->pc = 0x15A770u;
            goto label_15a770;
        }
    }
    ctx->pc = 0x15A76Cu;
    // 0x15a76c: 0xac202ce4  sw          $zero, 0x2CE4($at)
    ctx->pc = 0x15a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11492), GPR_U32(ctx, 0));
label_15a770:
    // 0x15a770: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a774: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x15a778: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A778u;
    {
        const bool branch_taken_0x15a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A778u;
            // 0x15a77c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a778) {
            ctx->pc = 0x15A7A0u;
            goto label_15a7a0;
        }
    }
    ctx->pc = 0x15A780u;
    // 0x15a780: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a784: 0x8c222cf4  lw          $v0, 0x2CF4($at)
    ctx->pc = 0x15a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11508)));
    // 0x15a788: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a78c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a790: 0xc05d110  jal         func_174440
    ctx->pc = 0x15A790u;
    SET_GPR_U32(ctx, 31, 0x15A798u);
    ctx->pc = 0x15A794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A790u;
            // 0x15a794: 0xac222cf4  sw          $v0, 0x2CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A798u; }
        if (ctx->pc != 0x15A798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A798u; }
        if (ctx->pc != 0x15A798u) { return; }
    }
    ctx->pc = 0x15A798u;
    // 0x15a798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15A798u;
    {
        const bool branch_taken_0x15a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a798) {
            ctx->pc = 0x15A7C8u;
            goto label_15a7c8;
        }
    }
    ctx->pc = 0x15A7A0u;
label_15a7a0:
    // 0x15a7a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a7a4: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x15a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x15a7a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A7A8u;
    {
        const bool branch_taken_0x15a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7A8u;
            // 0x15a7ac: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7a8) {
            ctx->pc = 0x15A7C8u;
            goto label_15a7c8;
        }
    }
    ctx->pc = 0x15A7B0u;
    // 0x15a7b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a7b4: 0x8c222cf4  lw          $v0, 0x2CF4($at)
    ctx->pc = 0x15a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11508)));
    // 0x15a7b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15a7bc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a7c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x15A7C0u;
    SET_GPR_U32(ctx, 31, 0x15A7C8u);
    ctx->pc = 0x15A7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7C0u;
            // 0x15a7c4: 0xac222cf4  sw          $v0, 0x2CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A7C8u; }
        if (ctx->pc != 0x15A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A7C8u; }
        if (ctx->pc != 0x15A7C8u) { return; }
    }
    ctx->pc = 0x15A7C8u;
label_15a7c8:
    // 0x15a7c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a7cc: 0x8c222cf4  lw          $v0, 0x2CF4($at)
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11508)));
    // 0x15a7d0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x15a7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15a7d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A7D4u;
    {
        const bool branch_taken_0x15a7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7D4u;
            // 0x15a7d8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7d4) {
            ctx->pc = 0x15A7E0u;
            goto label_15a7e0;
        }
    }
    ctx->pc = 0x15A7DCu;
    // 0x15a7dc: 0xac202cf4  sw          $zero, 0x2CF4($at)
    ctx->pc = 0x15a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11508), GPR_U32(ctx, 0));
label_15a7e0:
    // 0x15a7e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a7e4: 0x8c222cf4  lw          $v0, 0x2CF4($at)
    ctx->pc = 0x15a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11508)));
    // 0x15a7e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A7E8u;
    {
        const bool branch_taken_0x15a7e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15A7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7E8u;
            // 0x15a7ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7e8) {
            ctx->pc = 0x15A7F8u;
            goto label_15a7f8;
        }
    }
    ctx->pc = 0x15A7F0u;
    // 0x15a7f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a7f4: 0xac222cf4  sw          $v0, 0x2CF4($at)
    ctx->pc = 0x15a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11508), GPR_U32(ctx, 2));
label_15a7f8:
    // 0x15a7f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a7fc: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x15a800: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A800u;
    {
        const bool branch_taken_0x15a800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A800u;
            // 0x15a804: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a800) {
            ctx->pc = 0x15A828u;
            goto label_15a828;
        }
    }
    ctx->pc = 0x15A808u;
    // 0x15a808: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x15a80c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A80Cu;
    {
        const bool branch_taken_0x15a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a80c) {
            ctx->pc = 0x15A828u;
            goto label_15a828;
        }
    }
    ctx->pc = 0x15A814u;
    // 0x15a814: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a818: 0x8c222ce4  lw          $v0, 0x2CE4($at)
    ctx->pc = 0x15a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15a81c: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15A81Cu;
    {
        const bool branch_taken_0x15a81c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15a81c) {
            ctx->pc = 0x15A850u;
            goto label_15a850;
        }
    }
    ctx->pc = 0x15A824u;
    // 0x15a824: 0x0  nop
    ctx->pc = 0x15a824u;
    // NOP
label_15a828:
    // 0x15a828: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a82c: 0x8c232cf4  lw          $v1, 0x2CF4($at)
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11508)));
    // 0x15a830: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15a834: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15a834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a838: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a83c: 0xac222cec  sw          $v0, 0x2CEC($at)
    ctx->pc = 0x15a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11500), GPR_U32(ctx, 2));
    // 0x15a840: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a844: 0xc05d110  jal         func_174440
    ctx->pc = 0x15A844u;
    SET_GPR_U32(ctx, 31, 0x15A84Cu);
    ctx->pc = 0x15A848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A844u;
            // 0x15a848: 0xac23354c  sw          $v1, 0x354C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A84Cu; }
        if (ctx->pc != 0x15A84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A84Cu; }
        if (ctx->pc != 0x15A84Cu) { return; }
    }
    ctx->pc = 0x15A84Cu;
    // 0x15a84c: 0x0  nop
    ctx->pc = 0x15a84cu;
    // NOP
label_15a850:
    // 0x15a850: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a854: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15A854u;
    SET_GPR_U32(ctx, 31, 0x15A85Cu);
    ctx->pc = 0x15A858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A854u;
            // 0x15a858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A85Cu; }
        if (ctx->pc != 0x15A85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A85Cu; }
        if (ctx->pc != 0x15A85Cu) { return; }
    }
    ctx->pc = 0x15A85Cu;
    // 0x15a85c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15a85cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a860: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a864: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15a864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15a868: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a86c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15a870: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15a870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15a874: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a878: 0x24842d60  addiu       $a0, $a0, 0x2D60
    ctx->pc = 0x15a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11616));
    // 0x15a87c: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x15a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x15a880: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x15a880u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a884: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a888: 0x8c232cf4  lw          $v1, 0x2CF4($at)
    ctx->pc = 0x15a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11508)));
    // 0x15a88c: 0x24a2ff54  addiu       $v0, $a1, -0xAC
    ctx->pc = 0x15a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967124));
    // 0x15a890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a894: 0x0  nop
    ctx->pc = 0x15a894u;
    // NOP
    // 0x15a898: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x15a898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x15a89c: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x15a89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a8a0: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x15a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15a8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a8a8: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A8A8u;
    SET_GPR_U32(ctx, 31, 0x15A8B0u);
    ctx->pc = 0x15A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8A8u;
            // 0x15a8ac: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8B0u; }
        if (ctx->pc != 0x15A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8B0u; }
        if (ctx->pc != 0x15A8B0u) { return; }
    }
    ctx->pc = 0x15A8B0u;
    // 0x15a8b0: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x15a8b4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15a8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15a8b8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15a8b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a8bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a8c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a8c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a8c8: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x15a8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15a8cc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a8d0: 0x8c252cf4  lw          $a1, 0x2CF4($at)
    ctx->pc = 0x15a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11508)));
    // 0x15a8d4: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x15a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x15a8d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15a8dc: 0x2463ff54  addiu       $v1, $v1, -0xAC
    ctx->pc = 0x15a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x15a8e0: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x15a8e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15a8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15a8e8: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x15a8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a8ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a8f4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x15a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a8f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a8fc: 0x0  nop
    ctx->pc = 0x15a8fcu;
    // NOP
    // 0x15a900: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x15a900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x15a904: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A904u;
    SET_GPR_U32(ctx, 31, 0x15A90Cu);
    ctx->pc = 0x15A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A904u;
            // 0x15a908: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A90Cu; }
        if (ctx->pc != 0x15A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A90Cu; }
        if (ctx->pc != 0x15A90Cu) { return; }
    }
    ctx->pc = 0x15A90Cu;
    // 0x15a90c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15a910: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a914: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15a914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15a918: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A918u;
    SET_GPR_U32(ctx, 31, 0x15A920u);
    ctx->pc = 0x15A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A918u;
            // 0x15a91c: 0x24842d20  addiu       $a0, $a0, 0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A920u; }
        if (ctx->pc != 0x15A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A920u; }
        if (ctx->pc != 0x15A920u) { return; }
    }
    ctx->pc = 0x15A920u;
    // 0x15a920: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15a924: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a928: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15a928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15a92c: 0x24842d30  addiu       $a0, $a0, 0x2D30
    ctx->pc = 0x15a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11568));
    // 0x15a930: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15a930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15a934: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15a938: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a93c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15A93Cu;
    SET_GPR_U32(ctx, 31, 0x15A944u);
    ctx->pc = 0x15A940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A93Cu;
            // 0x15a940: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A944u; }
        if (ctx->pc != 0x15A944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A944u; }
        if (ctx->pc != 0x15A944u) { return; }
    }
    ctx->pc = 0x15A944u;
    // 0x15a944: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a948: 0x27b400f4  addiu       $s4, $sp, 0xF4
    ctx->pc = 0x15a948u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x15a94c: 0x24422d60  addiu       $v0, $v0, 0x2D60
    ctx->pc = 0x15a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11616));
    // 0x15a950: 0x27b300fc  addiu       $s3, $sp, 0xFC
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x15a954: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x15a954u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x15a958: 0x27b200f8  addiu       $s2, $sp, 0xF8
    ctx->pc = 0x15a958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x15a95c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15a960: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15a964: 0x24429c54  addiu       $v0, $v0, -0x63AC
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941780));
    // 0x15a968: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x15a968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15a96c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15a970: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15a974: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x15a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x15a978: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15A978u;
    SET_GPR_U32(ctx, 31, 0x15A980u);
    ctx->pc = 0x15A97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A978u;
            // 0x15a97c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A980u; }
        if (ctx->pc != 0x15A980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A980u; }
        if (ctx->pc != 0x15A980u) { return; }
    }
    ctx->pc = 0x15A980u;
    // 0x15a980: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15a984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a988: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15a988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a98c: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15A98Cu;
    SET_GPR_U32(ctx, 31, 0x15A994u);
    ctx->pc = 0x15A990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A98Cu;
            // 0x15a990: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A994u; }
        if (ctx->pc != 0x15A994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A994u; }
        if (ctx->pc != 0x15A994u) { return; }
    }
    ctx->pc = 0x15A994u;
    // 0x15a994: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15A994u;
    SET_GPR_U32(ctx, 31, 0x15A99Cu);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A99Cu; }
        if (ctx->pc != 0x15A99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A99Cu; }
        if (ctx->pc != 0x15A99Cu) { return; }
    }
    ctx->pc = 0x15A99Cu;
    // 0x15a99c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15A99Cu;
    SET_GPR_U32(ctx, 31, 0x15A9A4u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9A4u; }
        if (ctx->pc != 0x15A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9A4u; }
        if (ctx->pc != 0x15A9A4u) { return; }
    }
    ctx->pc = 0x15A9A4u;
    // 0x15a9a4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x15a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x15a9a8: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15A9A8u;
    SET_GPR_U32(ctx, 31, 0x15A9B0u);
    ctx->pc = 0x15A9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9A8u;
            // 0x15a9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9B0u; }
        if (ctx->pc != 0x15A9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9B0u; }
        if (ctx->pc != 0x15A9B0u) { return; }
    }
    ctx->pc = 0x15A9B0u;
    // 0x15a9b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a9b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15a9b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15a9bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9c0: 0x24842de0  addiu       $a0, $a0, 0x2DE0
    ctx->pc = 0x15a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11744));
    // 0x15a9c4: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x15a9c8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15a9c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x15a9cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a9d0: 0x24a200a0  addiu       $v0, $a1, 0xA0
    ctx->pc = 0x15a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x15a9d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a9d8: 0x2462ff54  addiu       $v0, $v1, -0xAC
    ctx->pc = 0x15a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x15a9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a9e0: 0x0  nop
    ctx->pc = 0x15a9e0u;
    // NOP
    // 0x15a9e4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15a9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15a9e8: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15A9E8u;
    SET_GPR_U32(ctx, 31, 0x15A9F0u);
    ctx->pc = 0x15A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9E8u;
            // 0x15a9ec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9F0u; }
        if (ctx->pc != 0x15A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9F0u; }
        if (ctx->pc != 0x15A9F0u) { return; }
    }
    ctx->pc = 0x15A9F0u;
    // 0x15a9f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a9f4: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x15a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x15a9f8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15a9fc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15a9fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x15aa00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15aa00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15aa04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15aa08: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15aa0c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15aa10: 0x24842df0  addiu       $a0, $a0, 0x2DF0
    ctx->pc = 0x15aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11760));
    // 0x15aa14: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x15aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x15aa18: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15aa1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15aa1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa20: 0x2463ff54  addiu       $v1, $v1, -0xAC
    ctx->pc = 0x15aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967124));
    // 0x15aa24: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15aa24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15aa28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15aa2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa30: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15AA30u;
    SET_GPR_U32(ctx, 31, 0x15AA38u);
    ctx->pc = 0x15AA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA30u;
            // 0x15aa34: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA38u; }
        if (ctx->pc != 0x15AA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA38u; }
        if (ctx->pc != 0x15AA38u) { return; }
    }
    ctx->pc = 0x15AA38u;
    // 0x15aa38: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15aa3c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15aa40: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15aa40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15aa44: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AA44u;
    SET_GPR_U32(ctx, 31, 0x15AA4Cu);
    ctx->pc = 0x15AA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA44u;
            // 0x15aa48: 0x24842da0  addiu       $a0, $a0, 0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA4Cu; }
        if (ctx->pc != 0x15AA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA4Cu; }
        if (ctx->pc != 0x15AA4Cu) { return; }
    }
    ctx->pc = 0x15AA4Cu;
    // 0x15aa4c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15aa50: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15aa54: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15aa58: 0x24842db0  addiu       $a0, $a0, 0x2DB0
    ctx->pc = 0x15aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11696));
    // 0x15aa5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15aa60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15aa64: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15aa68: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AA68u;
    SET_GPR_U32(ctx, 31, 0x15AA70u);
    ctx->pc = 0x15AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA68u;
            // 0x15aa6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA70u; }
        if (ctx->pc != 0x15AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA70u; }
        if (ctx->pc != 0x15AA70u) { return; }
    }
    ctx->pc = 0x15AA70u;
    // 0x15aa70: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15aa74: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15aa78: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x15aa7c: 0x24639c48  addiu       $v1, $v1, -0x63B8
    ctx->pc = 0x15aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941768));
    // 0x15aa80: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x15aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x15aa84: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15aa88: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15aa8c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x15aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x15aa90: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x15aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x15aa94: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15AA94u;
    SET_GPR_U32(ctx, 31, 0x15AA9Cu);
    ctx->pc = 0x15AA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA94u;
            // 0x15aa98: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA9Cu; }
        if (ctx->pc != 0x15AA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA9Cu; }
        if (ctx->pc != 0x15AA9Cu) { return; }
    }
    ctx->pc = 0x15AA9Cu;
    // 0x15aa9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15aaa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aaa4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15aaa8: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15AAA8u;
    SET_GPR_U32(ctx, 31, 0x15AAB0u);
    ctx->pc = 0x15AAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAA8u;
            // 0x15aaac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAB0u; }
        if (ctx->pc != 0x15AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAB0u; }
        if (ctx->pc != 0x15AAB0u) { return; }
    }
    ctx->pc = 0x15AAB0u;
    // 0x15aab0: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15AAB0u;
    SET_GPR_U32(ctx, 31, 0x15AAB8u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAB8u; }
        if (ctx->pc != 0x15AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAB8u; }
        if (ctx->pc != 0x15AAB8u) { return; }
    }
    ctx->pc = 0x15AAB8u;
    // 0x15aab8: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15AAB8u;
    SET_GPR_U32(ctx, 31, 0x15AAC0u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAC0u; }
        if (ctx->pc != 0x15AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAC0u; }
        if (ctx->pc != 0x15AAC0u) { return; }
    }
    ctx->pc = 0x15AAC0u;
    // 0x15aac0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15aac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15aac4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x15aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x15aac8: 0x8c232ce4  lw          $v1, 0x2CE4($at)
    ctx->pc = 0x15aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11492)));
    // 0x15aacc: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x15aaccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x15aad0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x15aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15aad4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15aad8: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x15aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x15aadc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15aadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15aae0: 0x0  nop
    ctx->pc = 0x15aae0u;
    // NOP
    // 0x15aae4: 0x0  nop
    ctx->pc = 0x15aae4u;
    // NOP
    // 0x15aae8: 0x1010  mfhi        $v0
    ctx->pc = 0x15aae8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15aaec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15aaf0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x15aaf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x15aaf4: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x15AAF4u;
    SET_GPR_U32(ctx, 31, 0x15AAFCu);
    ctx->pc = 0x15AAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAF4u;
            // 0x15aaf8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAFCu; }
        if (ctx->pc != 0x15AAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAFCu; }
        if (ctx->pc != 0x15AAFCu) { return; }
    }
    ctx->pc = 0x15AAFCu;
    // 0x15aafc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x15aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15ab00: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x15ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x15ab04: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15ab08: 0xc060a44  jal         func_182910
    ctx->pc = 0x15AB08u;
    SET_GPR_U32(ctx, 31, 0x15AB10u);
    ctx->pc = 0x15AB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB08u;
            // 0x15ab0c: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB10u; }
        if (ctx->pc != 0x15AB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB10u; }
        if (ctx->pc != 0x15AB10u) { return; }
    }
    ctx->pc = 0x15AB10u;
    // 0x15ab10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15AB10u;
    {
        const bool branch_taken_0x15ab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab10) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15AB18u;
label_15ab18:
    // 0x15ab18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ab1c: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x15ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x15ab20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AB20u;
    {
        const bool branch_taken_0x15ab20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB20u;
            // 0x15ab24: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab20) {
            ctx->pc = 0x15AB40u;
            goto label_15ab40;
        }
    }
    ctx->pc = 0x15AB28u;
    // 0x15ab28: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x15ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x15ab2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AB2Cu;
    {
        const bool branch_taken_0x15ab2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ab2c) {
            ctx->pc = 0x15AB40u;
            goto label_15ab40;
        }
    }
    ctx->pc = 0x15AB34u;
    // 0x15ab34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ab34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ab38: 0xac203508  sw          $zero, 0x3508($at)
    ctx->pc = 0x15ab38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 0));
    // 0x15ab3c: 0x0  nop
    ctx->pc = 0x15ab3cu;
    // NOP
label_15ab40:
    // 0x15ab40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ab44: 0xac20353c  sw          $zero, 0x353C($at)
    ctx->pc = 0x15ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13628), GPR_U32(ctx, 0));
    // 0x15ab48: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x15ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x15ab4c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15ab4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15ab50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ab54: 0xc06369c  jal         func_18DA70
    ctx->pc = 0x15AB54u;
    SET_GPR_U32(ctx, 31, 0x15AB5Cu);
    ctx->pc = 0x15AB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB54u;
            // 0x15ab58: 0xac229bb8  sw          $v0, -0x6448($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA70u;
    if (runtime->hasFunction(0x18DA70u)) {
        auto targetFn = runtime->lookupFunction(0x18DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB5Cu; }
        if (ctx->pc != 0x15AB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayer_0x18da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB5Cu; }
        if (ctx->pc != 0x15AB5Cu) { return; }
    }
    ctx->pc = 0x15AB5Cu;
    // 0x15ab5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ab5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ab60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ab64: 0x8c25354c  lw          $a1, 0x354C($at)
    ctx->pc = 0x15ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13644)));
    // 0x15ab68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ab6c: 0xac243534  sw          $a0, 0x3534($at)
    ctx->pc = 0x15ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13620), GPR_U32(ctx, 4));
    // 0x15ab70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ab74: 0x8c273554  lw          $a3, 0x3554($at)
    ctx->pc = 0x15ab74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13652)));
    // 0x15ab78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ab78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ab7c: 0x8c28355c  lw          $t0, 0x355C($at)
    ctx->pc = 0x15ab7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13660)));
    // 0x15ab80: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15AB80u;
    SET_GPR_U32(ctx, 31, 0x15AB88u);
    ctx->pc = 0x15AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB80u;
            // 0x15ab84: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB88u; }
        if (ctx->pc != 0x15AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB88u; }
        if (ctx->pc != 0x15AB88u) { return; }
    }
    ctx->pc = 0x15AB88u;
    // 0x15ab88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ab8c: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x15AB8Cu;
    SET_GPR_U32(ctx, 31, 0x15AB94u);
    ctx->pc = 0x15AB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB8Cu;
            // 0x15ab90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB94u; }
        if (ctx->pc != 0x15AB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB94u; }
        if (ctx->pc != 0x15AB94u) { return; }
    }
    ctx->pc = 0x15AB94u;
    // 0x15ab94: 0x0  nop
    ctx->pc = 0x15ab94u;
    // NOP
label_15ab98:
    // 0x15ab98: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ab9c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15ab9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15aba0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15aba0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15aba4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15aba4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15aba8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15aba8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15abac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15abacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15abb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15abb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15abb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15abb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15abb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15abb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15abbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15abbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15abc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABC0u;
            // 0x15abc4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15966Cu: goto label_15966c;
            case 0x1596B0u: goto label_1596b0;
            case 0x1596D0u: goto label_1596d0;
            case 0x159858u: goto label_159858;
            case 0x159868u: goto label_159868;
            case 0x159890u: goto label_159890;
            case 0x1598C0u: goto label_1598c0;
            case 0x1598E8u: goto label_1598e8;
            case 0x159900u: goto label_159900;
            case 0x159918u: goto label_159918;
            case 0x159948u: goto label_159948;
            case 0x159970u: goto label_159970;
            case 0x159AE8u: goto label_159ae8;
            case 0x159CA0u: goto label_159ca0;
            case 0x159CC8u: goto label_159cc8;
            case 0x159CF8u: goto label_159cf8;
            case 0x159D20u: goto label_159d20;
            case 0x159D38u: goto label_159d38;
            case 0x159D50u: goto label_159d50;
            case 0x159D80u: goto label_159d80;
            case 0x159DA8u: goto label_159da8;
            case 0x15A070u: goto label_15a070;
            case 0x15A098u: goto label_15a098;
            case 0x15A0F8u: goto label_15a0f8;
            case 0x15A114u: goto label_15a114;
            case 0x15A158u: goto label_15a158;
            case 0x15A170u: goto label_15a170;
            case 0x15A308u: goto label_15a308;
            case 0x15A318u: goto label_15a318;
            case 0x15A340u: goto label_15a340;
            case 0x15A370u: goto label_15a370;
            case 0x15A398u: goto label_15a398;
            case 0x15A3B0u: goto label_15a3b0;
            case 0x15A3C8u: goto label_15a3c8;
            case 0x15A3F8u: goto label_15a3f8;
            case 0x15A420u: goto label_15a420;
            case 0x15A588u: goto label_15a588;
            case 0x15A748u: goto label_15a748;
            case 0x15A770u: goto label_15a770;
            case 0x15A7A0u: goto label_15a7a0;
            case 0x15A7C8u: goto label_15a7c8;
            case 0x15A7E0u: goto label_15a7e0;
            case 0x15A7F8u: goto label_15a7f8;
            case 0x15A828u: goto label_15a828;
            case 0x15A850u: goto label_15a850;
            case 0x15AB18u: goto label_15ab18;
            case 0x15AB40u: goto label_15ab40;
            case 0x15AB98u: goto label_15ab98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15ABC8u;
}
