#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecBeginPut
// Address: 0x1198f0 - 0x119990
void audioDecBeginPut_0x1198f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecBeginPut_0x1198f0");
#endif

    ctx->pc = 0x1198f0u;

    // 0x1198f0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198f4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1198f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1198f8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1198F8u;
    {
        const bool branch_taken_0x1198f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1198f8) {
            ctx->pc = 0x1198FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1198F8u;
            // 0x1198fc: 0x8d23003c  lw          $v1, 0x3C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119930u;
            goto label_119930;
        }
    }
    ctx->pc = 0x119900u;
    // 0x119900: 0x8d24002c  lw          $a0, 0x2C($t1)
    ctx->pc = 0x119900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x119904: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x119904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x119908: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x119908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11990c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x11990cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119910: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x119910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x119914: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x119914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x119918: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x119918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x11991c: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x11991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x119920: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x119920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x119924: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x119924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x119928: 0x3e00008  jr          $ra
    ctx->pc = 0x119928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11992Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119928u;
            // 0x11992c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119930u: goto label_119930;
            case 0x119964u: goto label_119964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119930u;
label_119930:
    // 0x119930: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x119930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x119934: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x119934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x119938: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x119938u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11993c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11993cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119940: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x119940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x119944: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119944u;
    {
        const bool branch_taken_0x119944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119944u;
            // 0x119948: 0x8d220030  lw          $v0, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119944) {
            ctx->pc = 0x119964u;
            goto label_119964;
        }
    }
    ctx->pc = 0x11994Cu;
    // 0x11994c: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x11994cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x119950: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119954: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x119954u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x119958: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x119958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11995c: 0x3e00008  jr          $ra
    ctx->pc = 0x11995Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11995Cu;
            // 0x119960: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119930u: goto label_119930;
            case 0x119964u: goto label_119964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119964u;
label_119964:
    // 0x119964: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x119964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x119968: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11996c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11996cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x119970: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x119970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x119974: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x119974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x119978: 0x8d240030  lw          $a0, 0x30($t1)
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x11997c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11997cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119980: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x119980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x119984: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x119984u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x119988: 0x3e00008  jr          $ra
    ctx->pc = 0x119988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119988u;
            // 0x11998c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119930u: goto label_119930;
            case 0x119964u: goto label_119964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119990u;
}
