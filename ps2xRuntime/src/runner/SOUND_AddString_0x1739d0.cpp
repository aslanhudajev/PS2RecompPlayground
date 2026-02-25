#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_AddString
// Address: 0x1739d0 - 0x173a54
void SOUND_AddString_0x1739d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_AddString_0x1739d0");
#endif

    ctx->pc = 0x1739d0u;

    // 0x1739d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1739d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1739d4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1739d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1739d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1739d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1739dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1739dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1739e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1739e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1739e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1739e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739e8: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x1739e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x1739ec: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x1739ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x1739f0: 0x26101780  addiu       $s0, $s0, 0x1780
    ctx->pc = 0x1739f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6016));
    // 0x1739f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1739f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1739f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1739fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1739fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x173a00: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x173A00u;
    SET_GPR_U32(ctx, 31, 0x173A08u);
    ctx->pc = 0x173A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A00u;
            // 0x173a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A08u; }
        if (ctx->pc != 0x173A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A08u; }
        if (ctx->pc != 0x173A08u) { return; }
    }
    ctx->pc = 0x173A08u;
    // 0x173a08: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x173A08u;
    SET_GPR_U32(ctx, 31, 0x173A10u);
    ctx->pc = 0x173A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A08u;
            // 0x173a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A10u; }
        if (ctx->pc != 0x173A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A10u; }
        if (ctx->pc != 0x173A10u) { return; }
    }
    ctx->pc = 0x173A10u;
    // 0x173a10: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x173a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x173a14: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x173a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x173a18: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x173a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x173a1c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173A1Cu;
    {
        const bool branch_taken_0x173a1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x173A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A1Cu;
            // 0x173a20: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a1c) {
            ctx->pc = 0x173A2Cu;
            goto label_173a2c;
        }
    }
    ctx->pc = 0x173A24u;
    // 0x173a24: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x173a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173a28: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x173a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_173a2c:
    // 0x173a2c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173a30: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x173a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173a34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173a38: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173a3c: 0xac230ab0  sw          $v1, 0xAB0($at)
    ctx->pc = 0x173a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 3));
    // 0x173a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173a44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x173A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A4Cu;
            // 0x173a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A2Cu: goto label_173a2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173A54u;
}
