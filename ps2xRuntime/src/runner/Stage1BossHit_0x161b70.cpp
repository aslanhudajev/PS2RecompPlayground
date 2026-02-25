#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossHit
// Address: 0x161b70 - 0x161c1c
void Stage1BossHit_0x161b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossHit_0x161b70");
#endif

    ctx->pc = 0x161b70u;

    // 0x161b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161b78: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x161b7c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x161b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x161b80: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x161b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x161b84: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161B84u;
    {
        const bool branch_taken_0x161b84 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x161B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B84u;
            // 0x161b88: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b84) {
            ctx->pc = 0x161B98u;
            goto label_161b98;
        }
    }
    ctx->pc = 0x161B8Cu;
    // 0x161b8c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x161b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x161b90: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161B90u;
    {
        const bool branch_taken_0x161b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x161b90) {
            ctx->pc = 0x161BA8u;
            goto label_161ba8;
        }
    }
    ctx->pc = 0x161B98u;
label_161b98:
    // 0x161b98: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x161b9c: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x161b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x161ba0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x161BA0u;
    {
        const bool branch_taken_0x161ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ba0) {
            ctx->pc = 0x161C10u;
            goto label_161c10;
        }
    }
    ctx->pc = 0x161BA8u;
label_161ba8:
    // 0x161ba8: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x161ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x161bac: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161BACu;
    {
        const bool branch_taken_0x161bac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x161bac) {
            ctx->pc = 0x161BC8u;
            goto label_161bc8;
        }
    }
    ctx->pc = 0x161BB4u;
    // 0x161bb4: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x161bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x161bb8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x161bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x161bbc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x161bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161bc0: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x161bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x161bc4: 0x0  nop
    ctx->pc = 0x161bc4u;
    // NOP
label_161bc8:
    // 0x161bc8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x161bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x161bcc: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x161BCCu;
    {
        const bool branch_taken_0x161bcc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x161bcc) {
            ctx->pc = 0x161C10u;
            goto label_161c10;
        }
    }
    ctx->pc = 0x161BD4u;
    // 0x161bd4: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x161bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x161bd8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x161bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x161bdc: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x161bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x161be0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x161be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161be4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161be8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161bec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x161becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x161bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161bf4: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x161bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x161bf8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x161bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x161bfc: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x161bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x161c00: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x161c00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x161c04: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x161C04u;
    SET_GPR_U32(ctx, 31, 0x161C0Cu);
    ctx->pc = 0x161C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C04u;
            // 0x161c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C0Cu; }
        if (ctx->pc != 0x161C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C0Cu; }
        if (ctx->pc != 0x161C0Cu) { return; }
    }
    ctx->pc = 0x161C0Cu;
    // 0x161c0c: 0x0  nop
    ctx->pc = 0x161c0cu;
    // NOP
label_161c10:
    // 0x161c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161c14: 0x3e00008  jr          $ra
    ctx->pc = 0x161C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C14u;
            // 0x161c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161B98u: goto label_161b98;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BC8u: goto label_161bc8;
            case 0x161C10u: goto label_161c10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161C1Cu;
}
