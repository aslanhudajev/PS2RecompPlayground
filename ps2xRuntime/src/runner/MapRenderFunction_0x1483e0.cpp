#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapRenderFunction
// Address: 0x1483e0 - 0x148460
void MapRenderFunction_0x1483e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapRenderFunction_0x1483e0");
#endif

    ctx->pc = 0x1483e0u;

    // 0x1483e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1483e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1483e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1483e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1483e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1483ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1483ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1483f0: 0x8c309d08  lw          $s0, -0x62F8($at)
    ctx->pc = 0x1483f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941960)));
    // 0x1483f4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1483F4u;
    {
        const bool branch_taken_0x1483f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1483f4) {
            ctx->pc = 0x148420u;
            goto label_148420;
        }
    }
    ctx->pc = 0x1483FCu;
    // 0x1483fc: 0x0  nop
    ctx->pc = 0x1483fcu;
    // NOP
label_148400:
    // 0x148400: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x148400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148404: 0xc060510  jal         func_181440
    ctx->pc = 0x148404u;
    SET_GPR_U32(ctx, 31, 0x14840Cu);
    ctx->pc = 0x148408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148404u;
            // 0x148408: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14840Cu; }
        if (ctx->pc != 0x14840Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14840Cu; }
        if (ctx->pc != 0x14840Cu) { return; }
    }
    ctx->pc = 0x14840Cu;
    // 0x14840c: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x14840cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x148410: 0x0  nop
    ctx->pc = 0x148410u;
    // NOP
    // 0x148414: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x148414u;
    {
        const bool branch_taken_0x148414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x148414) {
            ctx->pc = 0x148400u;
            goto label_148400;
        }
    }
    ctx->pc = 0x14841Cu;
    // 0x14841c: 0x0  nop
    ctx->pc = 0x14841cu;
    // NOP
label_148420:
    // 0x148420: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148424: 0x8c309d10  lw          $s0, -0x62F0($at)
    ctx->pc = 0x148424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941968)));
    // 0x148428: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x148428u;
    {
        const bool branch_taken_0x148428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x148428) {
            ctx->pc = 0x148450u;
            goto label_148450;
        }
    }
    ctx->pc = 0x148430u;
label_148430:
    // 0x148430: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x148430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148434: 0xc060510  jal         func_181440
    ctx->pc = 0x148434u;
    SET_GPR_U32(ctx, 31, 0x14843Cu);
    ctx->pc = 0x148438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148434u;
            // 0x148438: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14843Cu; }
        if (ctx->pc != 0x14843Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14843Cu; }
        if (ctx->pc != 0x14843Cu) { return; }
    }
    ctx->pc = 0x14843Cu;
    // 0x14843c: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x14843cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x148440: 0x0  nop
    ctx->pc = 0x148440u;
    // NOP
    // 0x148444: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x148444u;
    {
        const bool branch_taken_0x148444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x148444) {
            ctx->pc = 0x148430u;
            goto label_148430;
        }
    }
    ctx->pc = 0x14844Cu;
    // 0x14844c: 0x0  nop
    ctx->pc = 0x14844cu;
    // NOP
label_148450:
    // 0x148450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148458: 0x3e00008  jr          $ra
    ctx->pc = 0x148458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148458u;
            // 0x14845c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148400u: goto label_148400;
            case 0x148420u: goto label_148420;
            case 0x148430u: goto label_148430;
            case 0x148450u: goto label_148450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148460u;
}
