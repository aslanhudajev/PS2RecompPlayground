#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: HalfScreen
// Address: 0x158020 - 0x1580c0
void HalfScreen_0x158020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("HalfScreen_0x158020");
#endif

    ctx->pc = 0x158020u;

    // 0x158020: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x158020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x158024: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158028: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x158028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15802c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15802cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x158030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158034: 0x3c02c360  lui         $v0, 0xC360
    ctx->pc = 0x158034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50016 << 16));
    // 0x158038: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x158038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15803c: 0x3c02491c  lui         $v0, 0x491C
    ctx->pc = 0x15803cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18716 << 16));
    // 0x158040: 0x3442a540  ori         $v0, $v0, 0xA540
    ctx->pc = 0x158040u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42304u)));
    // 0x158044: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x158044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x158048: 0xc056038  jal         func_1580E0
    ctx->pc = 0x158048u;
    SET_GPR_U32(ctx, 31, 0x158050u);
    ctx->pc = 0x15804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158048u;
            // 0x15804c: 0x24842c50  addiu       $a0, $a0, 0x2C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158050u; }
        if (ctx->pc != 0x158050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158050u; }
        if (ctx->pc != 0x158050u) { return; }
    }
    ctx->pc = 0x158050u;
    // 0x158050: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x158050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x158054: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x158054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x158058: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x158058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15805c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15805cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x158060: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x158060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x158064: 0x3c02491c  lui         $v0, 0x491C
    ctx->pc = 0x158064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18716 << 16));
    // 0x158068: 0x3442a540  ori         $v0, $v0, 0xA540
    ctx->pc = 0x158068u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42304u)));
    // 0x15806c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x158070: 0xc056038  jal         func_1580E0
    ctx->pc = 0x158070u;
    SET_GPR_U32(ctx, 31, 0x158078u);
    ctx->pc = 0x158074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158070u;
            // 0x158074: 0x24842c60  addiu       $a0, $a0, 0x2C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158078u; }
        if (ctx->pc != 0x158078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158078u; }
        if (ctx->pc != 0x158078u) { return; }
    }
    ctx->pc = 0x158078u;
    // 0x158078: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x158078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15807c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x158080: 0x24632c50  addiu       $v1, $v1, 0x2C50
    ctx->pc = 0x158080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11344));
    // 0x158084: 0x24429c58  addiu       $v0, $v0, -0x63A8
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941784));
    // 0x158088: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x158088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x15808c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x158090: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x158090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x158094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158098: 0xc056034  jal         func_1580D0
    ctx->pc = 0x158098u;
    SET_GPR_U32(ctx, 31, 0x1580A0u);
    ctx->pc = 0x15809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158098u;
            // 0x15809c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A0u; }
        if (ctx->pc != 0x1580A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A0u; }
        if (ctx->pc != 0x1580A0u) { return; }
    }
    ctx->pc = 0x1580A0u;
    // 0x1580a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1580a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1580a4: 0xc056030  jal         func_1580C0
    ctx->pc = 0x1580A4u;
    SET_GPR_U32(ctx, 31, 0x1580ACu);
    ctx->pc = 0x1580A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580A4u;
            // 0x1580a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580ACu; }
        if (ctx->pc != 0x1580ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580ACu; }
        if (ctx->pc != 0x1580ACu) { return; }
    }
    ctx->pc = 0x1580ACu;
    // 0x1580ac: 0xc05c2a8  jal         func_170AA0
    ctx->pc = 0x1580ACu;
    SET_GPR_U32(ctx, 31, 0x1580B4u);
    ctx->pc = 0x1580B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580ACu;
            // 0x1580b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AA0u;
    if (runtime->hasFunction(0x170AA0u)) {
        auto targetFn = runtime->lookupFunction(0x170AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580B4u; }
        if (ctx->pc != 0x1580B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFM_0x170aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580B4u; }
        if (ctx->pc != 0x1580B4u) { return; }
    }
    ctx->pc = 0x1580B4u;
    // 0x1580b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1580b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1580b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1580B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1580BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1580B8u;
            // 0x1580bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1580C0u;
}
