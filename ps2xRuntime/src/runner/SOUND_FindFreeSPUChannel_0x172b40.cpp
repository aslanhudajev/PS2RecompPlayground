#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_FindFreeSPUChannel
// Address: 0x172b40 - 0x172bd8
void SOUND_FindFreeSPUChannel_0x172b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_FindFreeSPUChannel_0x172b40");
#endif

    ctx->pc = 0x172b40u;

    // 0x172b40: 0x2c810030  sltiu       $at, $a0, 0x30
    ctx->pc = 0x172b40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x172b44: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172B44u;
    {
        const bool branch_taken_0x172b44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x172B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B44u;
            // 0x172b48: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b44) {
            ctx->pc = 0x172B58u;
            goto label_172b58;
        }
    }
    ctx->pc = 0x172B4Cu;
    // 0x172b4c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x172B4Cu;
    {
        const bool branch_taken_0x172b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b4c) {
            ctx->pc = 0x172BD0u;
            goto label_172bd0;
        }
    }
    ctx->pc = 0x172B54u;
    // 0x172b54: 0x0  nop
    ctx->pc = 0x172b54u;
    // NOP
label_172b58:
    // 0x172b58: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x172b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x172b5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172B5Cu;
    {
        const bool branch_taken_0x172b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B5Cu;
            // 0x172b60: 0x2ca10030  sltiu       $at, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b5c) {
            ctx->pc = 0x172B70u;
            goto label_172b70;
        }
    }
    ctx->pc = 0x172B64u;
    // 0x172b64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172B64u;
    {
        const bool branch_taken_0x172b64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x172b64) {
            ctx->pc = 0x172B78u;
            goto label_172b78;
        }
    }
    ctx->pc = 0x172B6Cu;
    // 0x172b6c: 0x0  nop
    ctx->pc = 0x172b6cu;
    // NOP
label_172b70:
    // 0x172b70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x172B70u;
    {
        const bool branch_taken_0x172b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B70u;
            // 0x172b74: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b70) {
            ctx->pc = 0x172BD0u;
            goto label_172bd0;
        }
    }
    ctx->pc = 0x172B78u;
label_172b78:
    // 0x172b78: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x172b78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x172b7c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x172B7Cu;
    {
        const bool branch_taken_0x172b7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x172B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B7Cu;
            // 0x172b80: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b7c) {
            ctx->pc = 0x172BC8u;
            goto label_172bc8;
        }
    }
    ctx->pc = 0x172B84u;
    // 0x172b84: 0x24420a80  addiu       $v0, $v0, 0xA80
    ctx->pc = 0x172b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
    // 0x172b88: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x172b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172b8c: 0x0  nop
    ctx->pc = 0x172b8cu;
    // NOP
label_172b90:
    // 0x172b90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x172b90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172b94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x172B94u;
    {
        const bool branch_taken_0x172b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B94u;
            // 0x172b98: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b94) {
            ctx->pc = 0x172BB8u;
            goto label_172bb8;
        }
    }
    ctx->pc = 0x172B9Cu;
    // 0x172b9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x172b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x172ba0: 0x24420a80  addiu       $v0, $v0, 0xA80
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
    // 0x172ba4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x172ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172ba8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x172ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172bac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172BACu;
    {
        const bool branch_taken_0x172bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172BACu;
            // 0x172bb0: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bac) {
            ctx->pc = 0x172BD0u;
            goto label_172bd0;
        }
    }
    ctx->pc = 0x172BB4u;
    // 0x172bb4: 0x0  nop
    ctx->pc = 0x172bb4u;
    // NOP
label_172bb8:
    // 0x172bb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172bbc: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x172bbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x172bc0: 0x1020fff3  beqz        $at, . + 4 + (-0xD << 2)
    ctx->pc = 0x172BC0u;
    {
        const bool branch_taken_0x172bc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172BC0u;
            // 0x172bc4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bc0) {
            ctx->pc = 0x172B90u;
            goto label_172b90;
        }
    }
    ctx->pc = 0x172BC8u;
label_172bc8:
    // 0x172bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x172bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x172bcc: 0x0  nop
    ctx->pc = 0x172bccu;
    // NOP
label_172bd0:
    // 0x172bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x172BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172B58u: goto label_172b58;
            case 0x172B70u: goto label_172b70;
            case 0x172B78u: goto label_172b78;
            case 0x172B90u: goto label_172b90;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172BD8u;
}
