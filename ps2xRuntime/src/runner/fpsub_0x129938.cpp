#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fpsub
// Address: 0x129938 - 0x12999c
void fpsub_0x129938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fpsub_0x129938");
#endif

    ctx->pc = 0x129938u;

    // 0x129938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12993c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x12993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x129940: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x129940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x129944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x129944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x129948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12994c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x12994cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x129950: 0xc04a586  jal         func_129618
    ctx->pc = 0x129950u;
    SET_GPR_U32(ctx, 31, 0x129958u);
    ctx->pc = 0x129954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129950u;
            // 0x129954: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129958u; }
        if (ctx->pc != 0x129958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129958u; }
        if (ctx->pc != 0x129958u) { return; }
    }
    ctx->pc = 0x129958u;
    // 0x129958: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x129958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12995c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x12995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x129960: 0xc04a586  jal         func_129618
    ctx->pc = 0x129960u;
    SET_GPR_U32(ctx, 31, 0x129968u);
    ctx->pc = 0x129964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129960u;
            // 0x129964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129968u; }
        if (ctx->pc != 0x129968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129968u; }
        if (ctx->pc != 0x129968u) { return; }
    }
    ctx->pc = 0x129968u;
    // 0x129968: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x129968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12996c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129970: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x129970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129974: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129978: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x129978u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x12997c: 0xc04a5aa  jal         func_1296A8
    ctx->pc = 0x12997Cu;
    SET_GPR_U32(ctx, 31, 0x129984u);
    ctx->pc = 0x129980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12997Cu;
            // 0x129980: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1296A8u;
    if (runtime->hasFunction(0x1296A8u)) {
        auto targetFn = runtime->lookupFunction(0x1296A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129984u; }
        if (ctx->pc != 0x129984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x1296a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129984u; }
        if (ctx->pc != 0x129984u) { return; }
    }
    ctx->pc = 0x129984u;
    // 0x129984: 0xc04a542  jal         func_129508
    ctx->pc = 0x129984u;
    SET_GPR_U32(ctx, 31, 0x12998Cu);
    ctx->pc = 0x129988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129984u;
            // 0x129988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129508u;
    if (runtime->hasFunction(0x129508u)) {
        auto targetFn = runtime->lookupFunction(0x129508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12998Cu; }
        if (ctx->pc != 0x12998Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x129508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12998Cu; }
        if (ctx->pc != 0x12998Cu) { return; }
    }
    ctx->pc = 0x12998Cu;
    // 0x12998c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129990: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x129990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129994: 0x3e00008  jr          $ra
    ctx->pc = 0x129994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129994u;
            // 0x129998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12999Cu;
}
