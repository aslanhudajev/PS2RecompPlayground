#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dpsub
// Address: 0x102198 - 0x1021fc
void dpsub_0x102198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dpsub_0x102198");
#endif

    ctx->pc = 0x102198u;

    // 0x102198: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x102198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10219c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x10219cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1021a0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1021a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1021a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1021a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1021a8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1021a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1021ac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1021acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1021b0: 0xc040798  jal         func_101E60
    ctx->pc = 0x1021B0u;
    SET_GPR_U32(ctx, 31, 0x1021B8u);
    ctx->pc = 0x1021B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1021B0u;
            // 0x1021b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021B8u; }
        if (ctx->pc != 0x1021B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021B8u; }
        if (ctx->pc != 0x1021B8u) { return; }
    }
    ctx->pc = 0x1021B8u;
    // 0x1021b8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1021b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1021bc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1021bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1021c0: 0xc040798  jal         func_101E60
    ctx->pc = 0x1021C0u;
    SET_GPR_U32(ctx, 31, 0x1021C8u);
    ctx->pc = 0x1021C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1021C0u;
            // 0x1021c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021C8u; }
        if (ctx->pc != 0x1021C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021C8u; }
        if (ctx->pc != 0x1021C8u) { return; }
    }
    ctx->pc = 0x1021C8u;
    // 0x1021c8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1021cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1021ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1021d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1021d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1021d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1021d8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1021dc: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x1021DCu;
    SET_GPR_U32(ctx, 31, 0x1021E4u);
    ctx->pc = 0x1021E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1021DCu;
            // 0x1021e0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021E4u; }
        if (ctx->pc != 0x1021E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021E4u; }
        if (ctx->pc != 0x1021E4u) { return; }
    }
    ctx->pc = 0x1021E4u;
    // 0x1021e4: 0xc04074c  jal         func_101D30
    ctx->pc = 0x1021E4u;
    SET_GPR_U32(ctx, 31, 0x1021ECu);
    ctx->pc = 0x1021E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1021E4u;
            // 0x1021e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101D30u;
    if (runtime->hasFunction(0x101D30u)) {
        auto targetFn = runtime->lookupFunction(0x101D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021ECu; }
        if (ctx->pc != 0x1021ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x101d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021ECu; }
        if (ctx->pc != 0x1021ECu) { return; }
    }
    ctx->pc = 0x1021ECu;
    // 0x1021ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1021ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1021f0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1021f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1021f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1021F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1021F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1021F4u;
            // 0x1021f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1021FCu;
}
