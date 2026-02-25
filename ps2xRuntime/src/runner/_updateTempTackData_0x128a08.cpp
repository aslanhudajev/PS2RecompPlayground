#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _updateTempTackData
// Address: 0x128a08 - 0x128a7c
void _updateTempTackData_0x128a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_updateTempTackData_0x128a08");
#endif

    ctx->pc = 0x128a08u;

    // 0x128a08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x128a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x128a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a10: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x128a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x128a14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128a18: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128A18u;
    {
        const bool branch_taken_0x128a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A18u;
            // 0x128a1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a18) {
            ctx->pc = 0x128A40u;
            goto label_128a40;
        }
    }
    ctx->pc = 0x128A20u;
    // 0x128a20: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128A20u;
    {
        const bool branch_taken_0x128a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a20) {
            ctx->pc = 0x128A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128A20u;
            // 0x128a24: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128A44u;
            goto label_128a44;
        }
    }
    ctx->pc = 0x128A28u;
    // 0x128a28: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128A28u;
    {
        const bool branch_taken_0x128a28 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x128a28) {
            ctx->pc = 0x128A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128A28u;
            // 0x128a2c: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128A3Cu;
            goto label_128a3c;
        }
    }
    ctx->pc = 0x128A30u;
    // 0x128a30: 0x8cc20854  lw          $v0, 0x854($a2)
    ctx->pc = 0x128a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2132)));
    // 0x128a34: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x128a34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x128a38: 0xacc00854  sw          $zero, 0x854($a2)
    ctx->pc = 0x128a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
label_128a3c:
    // 0x128a3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_128a40:
    // 0x128a40: 0x8cc2084c  lw          $v0, 0x84C($a2)
    ctx->pc = 0x128a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_128a44:
    // 0x128a44: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x128a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x128a48: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x128A48u;
    {
        const bool branch_taken_0x128a48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A48u;
            // 0x128a4c: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a48) {
            ctx->pc = 0x128A64u;
            goto label_128a64;
        }
    }
    ctx->pc = 0x128A50u;
    // 0x128a50: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x128a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x128a54: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x128A54u;
    {
        const bool branch_taken_0x128a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a54) {
            ctx->pc = 0x128A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128A54u;
            // 0x128a58: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128A68u;
            goto label_128a68;
        }
    }
    ctx->pc = 0x128A5Cu;
    // 0x128a5c: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x128a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x128a60: 0xacc201ac  sw          $v0, 0x1AC($a2)
    ctx->pc = 0x128a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 2));
label_128a64:
    // 0x128a64: 0x8cc20850  lw          $v0, 0x850($a2)
    ctx->pc = 0x128a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
label_128a68:
    // 0x128a68: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x128a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    // 0x128a6c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x128a6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x128a70: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x128a70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x128a74: 0x3e00008  jr          $ra
    ctx->pc = 0x128A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A74u;
            // 0x128a78: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128A3Cu: goto label_128a3c;
            case 0x128A40u: goto label_128a40;
            case 0x128A44u: goto label_128a44;
            case 0x128A64u: goto label_128a64;
            case 0x128A68u: goto label_128a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A7Cu;
}
