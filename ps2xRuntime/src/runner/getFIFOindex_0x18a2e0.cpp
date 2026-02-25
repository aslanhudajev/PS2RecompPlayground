#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getFIFOindex
// Address: 0x18a2e0 - 0x18a340
void getFIFOindex_0x18a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getFIFOindex_0x18a2e0");
#endif

    ctx->pc = 0x18a2e0u;

    // 0x18a2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a2f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18a300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18a304: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18a304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18a308: 0xc061f94  jal         func_187E50
    ctx->pc = 0x18A308u;
    SET_GPR_U32(ctx, 31, 0x18A310u);
    ctx->pc = 0x18A30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A308u;
            // 0x18a30c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A310u; }
        if (ctx->pc != 0x18A310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A310u; }
        if (ctx->pc != 0x18A310u) { return; }
    }
    ctx->pc = 0x18A310u;
    // 0x18a310: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A310u;
    {
        const bool branch_taken_0x18a310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a310) {
            ctx->pc = 0x18A320u;
            goto label_18a320;
        }
    }
    ctx->pc = 0x18A318u;
    // 0x18a318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A318u;
    {
        const bool branch_taken_0x18a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A318u;
            // 0x18a31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a318) {
            ctx->pc = 0x18A32Cu;
            goto label_18a32c;
        }
    }
    ctx->pc = 0x18A320u;
label_18a320:
    // 0x18a320: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a324: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x18a324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18a328: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x18a328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_18a32c:
    // 0x18a32c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a338: 0x3e00008  jr          $ra
    ctx->pc = 0x18A338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A338u;
            // 0x18a33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A320u: goto label_18a320;
            case 0x18A32Cu: goto label_18a32c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A340u;
}
