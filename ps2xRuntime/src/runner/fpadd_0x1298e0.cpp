#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpadd
// Address: 0x1298e0 - 0x129938
void fpadd_0x1298e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1298e0u;

    // 0x1298e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1298e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1298e4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1298e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1298e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1298e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1298ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1298ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1298f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1298f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298f4: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1298f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1298f8: 0xc04a586  jal         func_129618
    ctx->pc = 0x1298F8u;
    SET_GPR_U32(ctx, 31, 0x129900u);
    ctx->pc = 0x1298FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1298F8u;
            // 0x1298fc: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129900u; }
        if (ctx->pc != 0x129900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129900u; }
        if (ctx->pc != 0x129900u) { return; }
    }
    ctx->pc = 0x129900u;
    // 0x129900: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x129900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129904: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x129904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x129908: 0xc04a586  jal         func_129618
    ctx->pc = 0x129908u;
    SET_GPR_U32(ctx, 31, 0x129910u);
    ctx->pc = 0x12990Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129908u;
            // 0x12990c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129910u; }
        if (ctx->pc != 0x129910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129910u; }
        if (ctx->pc != 0x129910u) { return; }
    }
    ctx->pc = 0x129910u;
    // 0x129910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129914: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x129914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129918: 0xc04a5aa  jal         func_1296A8
    ctx->pc = 0x129918u;
    SET_GPR_U32(ctx, 31, 0x129920u);
    ctx->pc = 0x12991Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129918u;
            // 0x12991c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1296A8u;
    if (runtime->hasFunction(0x1296A8u)) {
        auto targetFn = runtime->lookupFunction(0x1296A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129920u; }
        if (ctx->pc != 0x129920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x1296a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129920u; }
        if (ctx->pc != 0x129920u) { return; }
    }
    ctx->pc = 0x129920u;
    // 0x129920: 0xc04a542  jal         func_129508
    ctx->pc = 0x129920u;
    SET_GPR_U32(ctx, 31, 0x129928u);
    ctx->pc = 0x129924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129920u;
            // 0x129924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129508u;
    if (runtime->hasFunction(0x129508u)) {
        auto targetFn = runtime->lookupFunction(0x129508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129928u; }
        if (ctx->pc != 0x129928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x129508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129928u; }
        if (ctx->pc != 0x129928u) { return; }
    }
    ctx->pc = 0x129928u;
    // 0x129928: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x129928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12992c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x12992cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129930: 0x3e00008  jr          $ra
    ctx->pc = 0x129930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129930u;
            // 0x129934: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129938u;
}
