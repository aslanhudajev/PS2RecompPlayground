#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg8_rot_r45
// Address: 0x143ba0 - 0x143c00
void MapMoveingFuncStg8_rot_r45_0x143ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg8_rot_r45_0x143ba0");
#endif

    ctx->pc = 0x143ba0u;

    // 0x143ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143ba4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x143ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x143ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143bb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bb8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x143bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x143bbc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x143BBCu;
    SET_GPR_U32(ctx, 31, 0x143BC4u);
    ctx->pc = 0x143BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143BBCu;
            // 0x143bc0: 0xdc2595e8  ld          $a1, -0x6A18($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BC4u; }
        if (ctx->pc != 0x143BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BC4u; }
        if (ctx->pc != 0x143BC4u) { return; }
    }
    ctx->pc = 0x143BC4u;
    // 0x143bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bc8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x143BC8u;
    SET_GPR_U32(ctx, 31, 0x143BD0u);
    ctx->pc = 0x143BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143BC8u;
            // 0x143bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BD0u; }
        if (ctx->pc != 0x143BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BD0u; }
        if (ctx->pc != 0x143BD0u) { return; }
    }
    ctx->pc = 0x143BD0u;
    // 0x143bd0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143bd4: 0xc4209c60  lwc1        $f0, -0x63A0($at)
    ctx->pc = 0x143bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143bd8: 0xc0788f8  jal         func_1E23E0
    ctx->pc = 0x143BD8u;
    SET_GPR_U32(ctx, 31, 0x143BE0u);
    ctx->pc = 0x143BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143BD8u;
            // 0x143bdc: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23E0u;
    if (runtime->hasFunction(0x1E23E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BE0u; }
        if (ctx->pc != 0x143BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isstage8bossbroken_0x1e23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BE0u; }
        if (ctx->pc != 0x143BE0u) { return; }
    }
    ctx->pc = 0x143BE0u;
    // 0x143be0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143BE0u;
    {
        const bool branch_taken_0x143be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BE0u;
            // 0x143be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143be0) {
            ctx->pc = 0x143BF0u;
            goto label_143bf0;
        }
    }
    ctx->pc = 0x143BE8u;
    // 0x143be8: 0xc053348  jal         func_14CD20
    ctx->pc = 0x143BE8u;
    SET_GPR_U32(ctx, 31, 0x143BF0u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BF0u; }
        if (ctx->pc != 0x143BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BF0u; }
        if (ctx->pc != 0x143BF0u) { return; }
    }
    ctx->pc = 0x143BF0u;
label_143bf0:
    // 0x143bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x143BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BF8u;
            // 0x143bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143BF0u: goto label_143bf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143C00u;
}
