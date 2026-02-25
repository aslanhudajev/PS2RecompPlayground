#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitMalloc
// Address: 0x1427a0 - 0x1428ac
void wrsInitMalloc_0x1427a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitMalloc_0x1427a0");
#endif

    ctx->pc = 0x1427a0u;

    // 0x1427a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1427a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1427a4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1427a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1427a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1427a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1427ac: 0x3444fff0  ori         $a0, $v0, 0xFFF0
    ctx->pc = 0x1427acu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65520u)));
    // 0x1427b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1427b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1427b4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1427b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1427b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1427b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1427bc: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x1427BCu;
    SET_GPR_U32(ctx, 31, 0x1427C4u);
    ctx->pc = 0x1427C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1427BCu;
            // 0x1427c0: 0xac247a10  sw          $a0, 0x7A10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427C4u; }
        if (ctx->pc != 0x1427C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427C4u; }
        if (ctx->pc != 0x1427C4u) { return; }
    }
    ctx->pc = 0x1427C4u;
    // 0x1427c4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1427c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1427c8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1427c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1427cc: 0xac207a00  sw          $zero, 0x7A00($at)
    ctx->pc = 0x1427ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31232), GPR_U32(ctx, 0));
    // 0x1427d0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1427d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1427d4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1427d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1427d8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1427d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65520u)));
    // 0x1427dc: 0xac207a08  sw          $zero, 0x7A08($at)
    ctx->pc = 0x1427dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31240), GPR_U32(ctx, 0));
    // 0x1427e0: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1427e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1427e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1427e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1427e8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1427e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1427ec: 0x24847950  addiu       $a0, $a0, 0x7950
    ctx->pc = 0x1427ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31056));
    // 0x1427f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1427f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427f4: 0xac227a18  sw          $v0, 0x7A18($at)
    ctx->pc = 0x1427f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31256), GPR_U32(ctx, 2));
    // 0x1427f8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x1427F8u;
    SET_GPR_U32(ctx, 31, 0x142800u);
    ctx->pc = 0x1427FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1427F8u;
            // 0x1427fc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142800u; }
        if (ctx->pc != 0x142800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142800u; }
        if (ctx->pc != 0x142800u) { return; }
    }
    ctx->pc = 0x142800u;
    // 0x142800: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142804: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x142808: 0xac207940  sw          $zero, 0x7940($at)
    ctx->pc = 0x142808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31040), GPR_U32(ctx, 0));
    // 0x14280c: 0x24840a70  addiu       $a0, $a0, 0xA70
    ctx->pc = 0x14280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
    // 0x142810: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142818: 0xac207948  sw          $zero, 0x7948($at)
    ctx->pc = 0x142818u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31048), GPR_U32(ctx, 0));
    // 0x14281c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14281cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142820: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142824: 0xac207938  sw          $zero, 0x7938($at)
    ctx->pc = 0x142824u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31032), GPR_U32(ctx, 0));
    // 0x142828: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14282c: 0xac207930  sw          $zero, 0x7930($at)
    ctx->pc = 0x14282cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31024), GPR_U32(ctx, 0));
    // 0x142830: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142834: 0xac207928  sw          $zero, 0x7928($at)
    ctx->pc = 0x142834u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 0));
    // 0x142838: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14283c: 0xac207920  sw          $zero, 0x7920($at)
    ctx->pc = 0x14283cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 0));
    // 0x142840: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142844: 0x8c317a18  lw          $s1, 0x7A18($at)
    ctx->pc = 0x142844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31256)));
    // 0x142848: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14284c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14284cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142850: 0xc05080c  jal         func_142030
    ctx->pc = 0x142850u;
    SET_GPR_U32(ctx, 31, 0x142858u);
    ctx->pc = 0x142854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142850u;
            // 0x142854: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142030u;
    if (runtime->hasFunction(0x142030u)) {
        auto targetFn = runtime->lookupFunction(0x142030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142858u; }
        if (ctx->pc != 0x142858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocHeaderInit_0x142030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142858u; }
        if (ctx->pc != 0x142858u) { return; }
    }
    ctx->pc = 0x142858u;
    // 0x142858: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14285c: 0xac3179e8  sw          $s1, 0x79E8($at)
    ctx->pc = 0x14285cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31208), GPR_U32(ctx, 17));
    // 0x142860: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142864: 0xac3079e0  sw          $s0, 0x79E0($at)
    ctx->pc = 0x142864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31200), GPR_U32(ctx, 16));
    // 0x142868: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14286c: 0xac2079f8  sw          $zero, 0x79F8($at)
    ctx->pc = 0x14286cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31224), GPR_U32(ctx, 0));
    // 0x142870: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142874: 0x8c247a10  lw          $a0, 0x7A10($at)
    ctx->pc = 0x142874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31248)));
    // 0x142878: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14287c: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x14287cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x142880: 0x8c237a00  lw          $v1, 0x7A00($at)
    ctx->pc = 0x142880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31232)));
    // 0x142884: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x142888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14288c: 0xac2479f0  sw          $a0, 0x79F0($at)
    ctx->pc = 0x14288cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31216), GPR_U32(ctx, 4));
    // 0x142890: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142894: 0xac237a00  sw          $v1, 0x7A00($at)
    ctx->pc = 0x142894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31232), GPR_U32(ctx, 3));
    // 0x142898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14289c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14289cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1428a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1428a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1428a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1428A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1428A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1428A4u;
            // 0x1428a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1428ACu;
}
