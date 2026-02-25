#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_Shot
// Address: 0x18f8c0 - 0x18f974
void CreateEn2_Shot_0x18f8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_Shot_0x18f8c0");
#endif

    ctx->pc = 0x18f8c0u;

    // 0x18f8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f8c8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x18f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18f8cc: 0xc063e60  jal         func_18F980
    ctx->pc = 0x18F8CCu;
    SET_GPR_U32(ctx, 31, 0x18F8D4u);
    ctx->pc = 0x18F8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8CCu;
            // 0x18f8d0: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F980u;
    if (runtime->hasFunction(0x18F980u)) {
        auto targetFn = runtime->lookupFunction(0x18F980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8D4u; }
        if (ctx->pc != 0x18F8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x18f980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8D4u; }
        if (ctx->pc != 0x18F8D4u) { return; }
    }
    ctx->pc = 0x18F8D4u;
    // 0x18f8d4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x18f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f8d8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x18F8D8u;
    SET_GPR_U32(ctx, 31, 0x18F8E0u);
    ctx->pc = 0x18F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8D8u;
            // 0x18f8dc: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8E0u; }
        if (ctx->pc != 0x18F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8E0u; }
        if (ctx->pc != 0x18F8E0u) { return; }
    }
    ctx->pc = 0x18F8E0u;
    // 0x18f8e0: 0xc065d00  jal         func_197400
    ctx->pc = 0x18F8E0u;
    SET_GPR_U32(ctx, 31, 0x18F8E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8E8u; }
        if (ctx->pc != 0x18F8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8E8u; }
        if (ctx->pc != 0x18F8E8u) { return; }
    }
    ctx->pc = 0x18F8E8u;
    // 0x18f8e8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F8E8u;
    {
        const bool branch_taken_0x18f8e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18f8e8) {
            ctx->pc = 0x18F900u;
            goto label_18f900;
        }
    }
    ctx->pc = 0x18F8F0u;
    // 0x18f8f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18f8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f8f4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f8f8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x18F8F8u;
    SET_GPR_U32(ctx, 31, 0x18F900u);
    ctx->pc = 0x18F8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8F8u;
            // 0x18f8fc: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F900u; }
        if (ctx->pc != 0x18F900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F900u; }
        if (ctx->pc != 0x18F900u) { return; }
    }
    ctx->pc = 0x18F900u;
label_18f900:
    // 0x18f900: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x18f900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f904: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x18f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x18f908: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f90c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x18F90Cu;
    SET_GPR_U32(ctx, 31, 0x18F914u);
    ctx->pc = 0x18F910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F90Cu;
            // 0x18f910: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F914u; }
        if (ctx->pc != 0x18F914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F914u; }
        if (ctx->pc != 0x18F914u) { return; }
    }
    ctx->pc = 0x18F914u;
    // 0x18f914: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18f918: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x18f918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f91c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f920: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x18F920u;
    SET_GPR_U32(ctx, 31, 0x18F928u);
    ctx->pc = 0x18F924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F920u;
            // 0x18f924: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F928u; }
        if (ctx->pc != 0x18F928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F928u; }
        if (ctx->pc != 0x18F928u) { return; }
    }
    ctx->pc = 0x18F928u;
    // 0x18f928: 0xc065d00  jal         func_197400
    ctx->pc = 0x18F928u;
    SET_GPR_U32(ctx, 31, 0x18F930u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F930u; }
        if (ctx->pc != 0x18F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F930u; }
        if (ctx->pc != 0x18F930u) { return; }
    }
    ctx->pc = 0x18F930u;
    // 0x18f930: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18f930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18f934: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x18F934u;
    {
        const bool branch_taken_0x18f934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f934) {
            ctx->pc = 0x18F968u;
            goto label_18f968;
        }
    }
    ctx->pc = 0x18F93Cu;
    // 0x18f93c: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x18f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x18f940: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f944: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f948: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x18F948u;
    SET_GPR_U32(ctx, 31, 0x18F950u);
    ctx->pc = 0x18F94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F948u;
            // 0x18f94c: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F950u; }
        if (ctx->pc != 0x18F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F950u; }
        if (ctx->pc != 0x18F950u) { return; }
    }
    ctx->pc = 0x18F950u;
    // 0x18f950: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x18f950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x18f954: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x18f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f95c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x18F95Cu;
    SET_GPR_U32(ctx, 31, 0x18F964u);
    ctx->pc = 0x18F960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F95Cu;
            // 0x18f960: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F964u; }
        if (ctx->pc != 0x18F964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F964u; }
        if (ctx->pc != 0x18F964u) { return; }
    }
    ctx->pc = 0x18F964u;
    // 0x18f964: 0x0  nop
    ctx->pc = 0x18f964u;
    // NOP
label_18f968:
    // 0x18f968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f96c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F96Cu;
            // 0x18f970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F900u: goto label_18f900;
            case 0x18F968u: goto label_18f968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F974u;
}
