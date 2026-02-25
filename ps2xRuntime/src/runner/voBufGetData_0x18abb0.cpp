#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufGetData
// Address: 0x18abb0 - 0x18ac0c
void voBufGetData_0x18abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufGetData_0x18abb0");
#endif

    ctx->pc = 0x18abb0u;

    // 0x18abb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18abb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18abb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18abbc: 0xc062b28  jal         func_18ACA0
    ctx->pc = 0x18ABBCu;
    SET_GPR_U32(ctx, 31, 0x18ABC4u);
    ctx->pc = 0x18ABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABBCu;
            // 0x18abc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACA0u;
    if (runtime->hasFunction(0x18ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABC4u; }
        if (ctx->pc != 0x18ABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull_0x18aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABC4u; }
        if (ctx->pc != 0x18ABC4u) { return; }
    }
    ctx->pc = 0x18ABC4u;
    // 0x18abc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ABC4u;
    {
        const bool branch_taken_0x18abc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18abc4) {
            ctx->pc = 0x18ABD4u;
            goto label_18abd4;
        }
    }
    ctx->pc = 0x18ABCCu;
    // 0x18abcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18ABCCu;
    {
        const bool branch_taken_0x18abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABCCu;
            // 0x18abd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abcc) {
            ctx->pc = 0x18ABFCu;
            goto label_18abfc;
        }
    }
    ctx->pc = 0x18ABD4u;
label_18abd4:
    // 0x18abd4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x18abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18abd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18abdc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18abe0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18abe4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18abe8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18abec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18abecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18abf0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18abf4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x18abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x18abf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18abfc:
    // 0x18abfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18abfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ac00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ac00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ac04: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC04u;
            // 0x18ac08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18ABD4u: goto label_18abd4;
            case 0x18ABFCu: goto label_18abfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AC0Cu;
}
