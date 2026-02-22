#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fptodp
// Address: 0x12a0a8 - 0x12a0e8
void fptodp_0x12a0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a0a8u;

    // 0x12a0a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a0ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a0b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12a0b4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x12a0b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12a0b8: 0xc04a586  jal         func_129618
    ctx->pc = 0x12A0B8u;
    SET_GPR_U32(ctx, 31, 0x12A0C0u);
    ctx->pc = 0x12A0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0B8u;
            // 0x12a0bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A0C0u; }
        if (ctx->pc != 0x12A0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A0C0u; }
        if (ctx->pc != 0x12A0C0u) { return; }
    }
    ctx->pc = 0x12A0C0u;
    // 0x12a0c0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x12a0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12a0c4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a0c8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x12a0c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12a0cc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12a0d0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x12a0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a0d4: 0xc04a520  jal         func_129480
    ctx->pc = 0x12A0D4u;
    SET_GPR_U32(ctx, 31, 0x12A0DCu);
    ctx->pc = 0x12A0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0D4u;
            // 0x12a0d8: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (runtime->hasFunction(0x129480u)) {
        auto targetFn = runtime->lookupFunction(0x129480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A0DCu; }
        if (ctx->pc != 0x12A0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_dp_0x129480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A0DCu; }
        if (ctx->pc != 0x12A0DCu) { return; }
    }
    ctx->pc = 0x12A0DCu;
    // 0x12a0dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12A0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0E0u;
            // 0x12a0e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A0E8u;
}
