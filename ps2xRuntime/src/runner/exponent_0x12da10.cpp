#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: exponent
// Address: 0x12da10 - 0x12daf0
void exponent_0x12da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("exponent_0x12da10");
#endif

    ctx->pc = 0x12da10u;

    // 0x12da10: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x12da14: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DA14u;
    {
        const bool branch_taken_0x12da14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12DA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA14u;
            // 0x12da18: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da14) {
            ctx->pc = 0x12DA30u;
            goto label_12da30;
        }
    }
    ctx->pc = 0x12DA1Cu;
    // 0x12da1c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12da20: 0x52823  negu        $a1, $a1
    ctx->pc = 0x12da20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x12da24: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x12da24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x12da28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12DA28u;
    {
        const bool branch_taken_0x12da28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA28u;
            // 0x12da2c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da28) {
            ctx->pc = 0x12DA3Cu;
            goto label_12da3c;
        }
    }
    ctx->pc = 0x12DA30u;
label_12da30:
    // 0x12da30: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x12da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12da34: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x12da34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12da38: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x12da38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_12da3c:
    // 0x12da3c: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x12da40: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x12da40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12da44: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x12DA44u;
    {
        const bool branch_taken_0x12da44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA44u;
            // 0x12da48: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da44) {
            ctx->pc = 0x12DACCu;
            goto label_12dacc;
        }
    }
    ctx->pc = 0x12DA4Cu;
    // 0x12da4c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12da50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12da50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da54: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x12da54u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_12da58:
    // 0x12da58: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DA58u;
    {
        const bool branch_taken_0x12da58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x12da58) {
            ctx->pc = 0x12DA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA58u;
            // 0x12da5c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DA60u;
            goto label_12da60;
        }
    }
    ctx->pc = 0x12DA60u;
label_12da60:
    // 0x12da60: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12da60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12da64: 0x1010  mfhi        $v0
    ctx->pc = 0x12da64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12da68: 0x1812  mflo        $v1
    ctx->pc = 0x12da68u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12da6c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12da70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12da70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da74: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x12da74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12da78: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x12da78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12da7c: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DA7Cu;
    {
        const bool branch_taken_0x12da7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x12da7c) {
            ctx->pc = 0x12DA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA7Cu;
            // 0x12da80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DA84u;
            goto label_12da84;
        }
    }
    ctx->pc = 0x12DA84u;
label_12da84:
    // 0x12da84: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x12DA84u;
    {
        const bool branch_taken_0x12da84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da84) {
            ctx->pc = 0x12DA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA84u;
            // 0x12da88: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DA58u;
            goto label_12da58;
        }
    }
    ctx->pc = 0x12DA8Cu;
    // 0x12da8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12da90: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12da94: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x12da94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12da98: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12DA98u;
    {
        const bool branch_taken_0x12da98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA98u;
            // 0x12da9c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da98) {
            ctx->pc = 0x12DAE4u;
            goto label_12dae4;
        }
    }
    ctx->pc = 0x12DAA0u;
    // 0x12daa0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x12daa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12daa4: 0x0  nop
    ctx->pc = 0x12daa4u;
    // NOP
label_12daa8:
    // 0x12daa8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x12daa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12daac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12daacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12dab0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x12dab0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12dab4: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x12dab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12dab8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12dabc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DABCu;
    {
        const bool branch_taken_0x12dabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dabc) {
            ctx->pc = 0x12DAA8u;
            goto label_12daa8;
        }
    }
    ctx->pc = 0x12DAC4u;
    // 0x12dac4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12DAC4u;
    {
        const bool branch_taken_0x12dac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DAC4u;
            // 0x12dac8: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dac4) {
            ctx->pc = 0x12DAE8u;
            goto label_12dae8;
        }
    }
    ctx->pc = 0x12DACCu;
label_12dacc:
    // 0x12dacc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12dad0: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x12dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12dad4: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x12dad4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12dad8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12dadc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x12dadcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12dae0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_12dae4:
    // 0x12dae4: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x12dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_12dae8:
    // 0x12dae8: 0x3e00008  jr          $ra
    ctx->pc = 0x12DAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DAE8u;
            // 0x12daec: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DA30u: goto label_12da30;
            case 0x12DA3Cu: goto label_12da3c;
            case 0x12DA58u: goto label_12da58;
            case 0x12DA60u: goto label_12da60;
            case 0x12DA84u: goto label_12da84;
            case 0x12DAA8u: goto label_12daa8;
            case 0x12DACCu: goto label_12dacc;
            case 0x12DAE4u: goto label_12dae4;
            case 0x12DAE8u: goto label_12dae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DAF0u;
}
