#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawPlayerNo
// Address: 0x15d340 - 0x15d3b8
void drawPlayerNo_0x15d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawPlayerNo_0x15d340");
#endif

    ctx->pc = 0x15d340u;

    // 0x15d340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d344: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d34c: 0x24429ca0  addiu       $v0, $v0, -0x6360
    ctx->pc = 0x15d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x15d350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d358: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x15d358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x15d35c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D35Cu;
    SET_GPR_U32(ctx, 31, 0x15D364u);
    ctx->pc = 0x15D360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D35Cu;
            // 0x15d360: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D364u; }
        if (ctx->pc != 0x15D364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D364u; }
        if (ctx->pc != 0x15D364u) { return; }
    }
    ctx->pc = 0x15D364u;
    // 0x15d364: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D364u;
    {
        const bool branch_taken_0x15d364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D364u;
            // 0x15d368: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d364) {
            ctx->pc = 0x15D388u;
            goto label_15d388;
        }
    }
    ctx->pc = 0x15D36Cu;
    // 0x15d36c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d370: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d374: 0x24633ff0  addiu       $v1, $v1, 0x3FF0
    ctx->pc = 0x15d374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16368));
    // 0x15d378: 0x24423f70  addiu       $v0, $v0, 0x3F70
    ctx->pc = 0x15d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16240));
    // 0x15d37c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x15d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x15d380: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D380u;
    {
        const bool branch_taken_0x15d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D380u;
            // 0x15d384: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d380) {
            ctx->pc = 0x15D3A0u;
            goto label_15d3a0;
        }
    }
    ctx->pc = 0x15D388u;
label_15d388:
    // 0x15d388: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d38c: 0x24424010  addiu       $v0, $v0, 0x4010
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
    // 0x15d390: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15d390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x15d394: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d398: 0x24423f90  addiu       $v0, $v0, 0x3F90
    ctx->pc = 0x15d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16272));
    // 0x15d39c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_15d3a0:
    // 0x15d3a0: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D3A0u;
    SET_GPR_U32(ctx, 31, 0x15D3A8u);
    ctx->pc = 0x15D3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3A0u;
            // 0x15d3a4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3A8u; }
        if (ctx->pc != 0x15D3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3A8u; }
        if (ctx->pc != 0x15D3A8u) { return; }
    }
    ctx->pc = 0x15D3A8u;
    // 0x15d3a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3B0u;
            // 0x15d3b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D388u: goto label_15d388;
            case 0x15D3A0u: goto label_15d3a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D3B8u;
}
