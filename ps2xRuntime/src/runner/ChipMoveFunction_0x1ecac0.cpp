#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChipMoveFunction
// Address: 0x1ecac0 - 0x1ecb10
void ChipMoveFunction_0x1ecac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChipMoveFunction_0x1ecac0");
#endif

    ctx->pc = 0x1ecac0u;

label_1ecac0:
    // 0x1ecac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ecac4:
    // 0x1ecac4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
label_1ecac8:
    // 0x1ecac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ecac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ecacc:
    // 0x1ecacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ecad0:
    // 0x1ecad0: 0x8c243838  lw          $a0, 0x3838($at)
    ctx->pc = 0x1ecad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14392)));
label_1ecad4:
    // 0x1ecad4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1ecad8:
    if (ctx->pc == 0x1ECAD8u) {
        ctx->pc = 0x1ECADCu;
        goto label_1ecadc;
    }
    ctx->pc = 0x1ECAD4u;
    {
        const bool branch_taken_0x1ecad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecad4) {
            ctx->pc = 0x1ECB00u;
            goto label_1ecb00;
        }
    }
    ctx->pc = 0x1ECADCu;
label_1ecadc:
    // 0x1ecadc: 0x0  nop
    ctx->pc = 0x1ecadcu;
    // NOP
label_1ecae0:
    // 0x1ecae0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1ecae4:
    // 0x1ecae4: 0x40f809  jalr        $v0
label_1ecae8:
    if (ctx->pc == 0x1ECAE8u) {
        ctx->pc = 0x1ECAE8u;
            // 0x1ecae8: 0x8c90003c  lw          $s0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->pc = 0x1ECAECu;
        goto label_1ecaec;
    }
    ctx->pc = 0x1ECAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECAECu);
        ctx->pc = 0x1ECAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAE4u;
            // 0x1ecae8: 0x8c90003c  lw          $s0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECAC0u: goto label_1ecac0;
            case 0x1ECAC4u: goto label_1ecac4;
            case 0x1ECAC8u: goto label_1ecac8;
            case 0x1ECACCu: goto label_1ecacc;
            case 0x1ECAD0u: goto label_1ecad0;
            case 0x1ECAD4u: goto label_1ecad4;
            case 0x1ECAD8u: goto label_1ecad8;
            case 0x1ECADCu: goto label_1ecadc;
            case 0x1ECAE0u: goto label_1ecae0;
            case 0x1ECAE4u: goto label_1ecae4;
            case 0x1ECAE8u: goto label_1ecae8;
            case 0x1ECAECu: goto label_1ecaec;
            case 0x1ECAF0u: goto label_1ecaf0;
            case 0x1ECAF4u: goto label_1ecaf4;
            case 0x1ECAF8u: goto label_1ecaf8;
            case 0x1ECAFCu: goto label_1ecafc;
            case 0x1ECB00u: goto label_1ecb00;
            case 0x1ECB04u: goto label_1ecb04;
            case 0x1ECB08u: goto label_1ecb08;
            case 0x1ECB0Cu: goto label_1ecb0c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ECAECu; }
            if (ctx->pc != 0x1ECAECu) { return; }
        }
    }
    ctx->pc = 0x1ECAECu;
label_1ecaec:
    // 0x1ecaec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ecaf0:
    // 0x1ecaf0: 0x0  nop
    ctx->pc = 0x1ecaf0u;
    // NOP
label_1ecaf4:
    // 0x1ecaf4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_1ecaf8:
    if (ctx->pc == 0x1ECAF8u) {
        ctx->pc = 0x1ECAFCu;
        goto label_1ecafc;
    }
    ctx->pc = 0x1ECAF4u;
    {
        const bool branch_taken_0x1ecaf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecaf4) {
            ctx->pc = 0x1ECAE0u;
            goto label_1ecae0;
        }
    }
    ctx->pc = 0x1ECAFCu;
label_1ecafc:
    // 0x1ecafc: 0x0  nop
    ctx->pc = 0x1ecafcu;
    // NOP
label_1ecb00:
    // 0x1ecb00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ecb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecb04:
    // 0x1ecb04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecb08:
    // 0x1ecb08: 0x3e00008  jr          $ra
label_1ecb0c:
    if (ctx->pc == 0x1ECB0Cu) {
        ctx->pc = 0x1ECB0Cu;
            // 0x1ecb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1ECB10u;
        goto label_fallthrough_0x1ecb08;
    }
    ctx->pc = 0x1ECB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB08u;
            // 0x1ecb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECAC0u: goto label_1ecac0;
            case 0x1ECAC4u: goto label_1ecac4;
            case 0x1ECAC8u: goto label_1ecac8;
            case 0x1ECACCu: goto label_1ecacc;
            case 0x1ECAD0u: goto label_1ecad0;
            case 0x1ECAD4u: goto label_1ecad4;
            case 0x1ECAD8u: goto label_1ecad8;
            case 0x1ECADCu: goto label_1ecadc;
            case 0x1ECAE0u: goto label_1ecae0;
            case 0x1ECAE4u: goto label_1ecae4;
            case 0x1ECAE8u: goto label_1ecae8;
            case 0x1ECAECu: goto label_1ecaec;
            case 0x1ECAF0u: goto label_1ecaf0;
            case 0x1ECAF4u: goto label_1ecaf4;
            case 0x1ECAF8u: goto label_1ecaf8;
            case 0x1ECAFCu: goto label_1ecafc;
            case 0x1ECB00u: goto label_1ecb00;
            case 0x1ECB04u: goto label_1ecb04;
            case 0x1ECB08u: goto label_1ecb08;
            case 0x1ECB0Cu: goto label_1ecb0c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ecb08:
    ctx->pc = 0x1ECB10u;
}
