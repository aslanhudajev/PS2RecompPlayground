#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readBufEndPut
// Address: 0x188d70 - 0x188df4
void readBufEndPut_0x188d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufEndPut_0x188d70");
#endif

    ctx->pc = 0x188d70u;

    // 0x188d70: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188d74: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188d74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188d78: 0x8c260008  lw          $a2, 0x8($at)
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x188d7c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188d80: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188d80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188d84: 0x8c220004  lw          $v0, 0x4($at)
    ctx->pc = 0x188d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x188d88: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x188d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188d8c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x188d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x188d90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D90u;
    {
        const bool branch_taken_0x188d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d90) {
            ctx->pc = 0x188DA0u;
            goto label_188da0;
        }
    }
    ctx->pc = 0x188D98u;
    // 0x188d98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x188D98u;
    {
        const bool branch_taken_0x188d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d98) {
            ctx->pc = 0x188DA8u;
            goto label_188da8;
        }
    }
    ctx->pc = 0x188DA0u;
label_188da0:
    // 0x188da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188da4: 0x0  nop
    ctx->pc = 0x188da4u;
    // NOP
label_188da8:
    // 0x188da8: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188dac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188dacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188db0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x188db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188db4: 0x8c230000  lw          $v1, 0x0($at)
    ctx->pc = 0x188db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x188db8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x188db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188dbc: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188dc0: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x188dc0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x188dc4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188dc8: 0x0  nop
    ctx->pc = 0x188dc8u;
    // NOP
    // 0x188dcc: 0x1810  mfhi        $v1
    ctx->pc = 0x188dccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x188dd0: 0xac230000  sw          $v1, 0x0($at)
    ctx->pc = 0x188dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 3));
    // 0x188dd4: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188dd8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188ddc: 0x8c230004  lw          $v1, 0x4($at)
    ctx->pc = 0x188ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x188de0: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188de4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x188de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188de8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188de8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188dec: 0x3e00008  jr          $ra
    ctx->pc = 0x188DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188DECu;
            // 0x188df0: 0xac230004  sw          $v1, 0x4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188DA0u: goto label_188da0;
            case 0x188DA8u: goto label_188da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188DF4u;
}
