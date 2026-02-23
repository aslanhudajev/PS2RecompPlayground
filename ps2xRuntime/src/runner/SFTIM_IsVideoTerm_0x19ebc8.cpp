#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_IsVideoTerm
// Address: 0x19ebc8 - 0x19ec54
void SFTIM_IsVideoTerm_0x19ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_IsVideoTerm");


    ctx->pc = 0x19ebc8u;

    // 0x19ebc8: 0x27bdffc0
    ctx->pc = 0x19ebc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ebcc: 0x24820a94
    ctx->pc = 0x19ebccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 2708));
    // 0x19ebd0: 0xffbf0030
    ctx->pc = 0x19ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ebd4: 0xffb10020
    ctx->pc = 0x19ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19ebd8: 0xffb00010
    ctx->pc = 0x19ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19ebdc: 0x8c500234
    ctx->pc = 0x19ebdcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x19ebe0: 0x8c830940
    ctx->pc = 0x19ebe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2368)));
    // 0x19ebe4: 0x8c510230
    ctx->pc = 0x19ebe4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x19ebe8: 0x10600015
    ctx->pc = 0x19EBE8u;
    {
        const bool branch_taken_0x19ebe8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EBECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19ebe8) {
            ctx->pc = 0x19EC40u;
            goto label_19ec40;
        }
    }
    ctx->pc = 0x19EBF0u;
    // 0x19ebf0: 0x2402fffb
    ctx->pc = 0x19ebf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x19ebf4: 0x16220003
    ctx->pc = 0x19EBF4u;
    {
        const bool branch_taken_0x19ebf4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x19EBF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ebf4) {
            ctx->pc = 0x19EC04u;
            goto label_19ec04;
        }
    }
    ctx->pc = 0x19EBFCu;
    // 0x19ebfc: 0x10000010
    ctx->pc = 0x19EBFCu;
    {
        const bool branch_taken_0x19ebfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EC00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ebfc) {
            ctx->pc = 0x19EC40u;
            goto label_19ec40;
        }
    }
    ctx->pc = 0x19EC04u;
label_19ec04:
    // 0x19ec04: 0xc0677d0
    ctx->pc = 0x19EC04u;
    SET_GPR_U32(ctx, 31, 0x19EC0Cu);
    ctx->pc = 0x19EC08u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19DF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTime_0x19df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC0Cu; }
        else if (ctx->pc != 0x19EC0Cu) { ctx->pc = 0x19EC0Cu; }
    }
    if (ctx->pc != 0x19EC0Cu) { return; }
    ctx->pc = 0x19EC0Cu;
    // 0x19ec0c: 0x240407d0
    ctx->pc = 0x19ec0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2000));
    // 0x19ec10: 0x3402ea24
    ctx->pc = 0x19ec10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 59940));
    // 0x19ec14: 0x2042018
    ctx->pc = 0x19ec14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x19ec18: 0x50400001
    ctx->pc = 0x19EC18u;
    {
        const bool branch_taken_0x19ec18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19ec18) {
            ctx->pc = 0x19EC1Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19EC20u;
            goto label_19ec20;
        }
    }
    ctx->pc = 0x19EC20u;
label_19ec20:
    // 0x19ec20: 0x8fa70004
    ctx->pc = 0x19ec20u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19ec24: 0x200282d
    ctx->pc = 0x19ec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec28: 0x8fa60000
    ctx->pc = 0x19ec28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ec2c: 0x82001a
    ctx->pc = 0x19ec2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19ec30: 0x2012
    ctx->pc = 0x19ec30u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x19ec34: 0xc05f946
    ctx->pc = 0x19EC34u;
    SET_GPR_U32(ctx, 31, 0x19EC3Cu);
    ctx->pc = 0x19EC38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->pc = 0x17E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_CmpTime_0x17e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC3Cu; }
        else if (ctx->pc != 0x19EC3Cu) { ctx->pc = 0x19EC3Cu; }
    }
    if (ctx->pc != 0x19EC3Cu) { return; }
    ctx->pc = 0x19EC3Cu;
    // 0x19ec3c: 0x2102b
    ctx->pc = 0x19ec3cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_19ec40:
    // 0x19ec40: 0xdfbf0030
    ctx->pc = 0x19ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ec44: 0xdfb10020
    ctx->pc = 0x19ec44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ec48: 0xdfb00010
    ctx->pc = 0x19ec48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ec4c: 0x3e00008
    ctx->pc = 0x19EC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EC04u: goto label_19ec04;
            case 0x19EC20u: goto label_19ec20;
            case 0x19EC40u: goto label_19ec40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EC54u;
}
