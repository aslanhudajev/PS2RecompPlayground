#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_IsExecTime
// Address: 0x19e920 - 0x19ea64
void SFTIM_IsExecTime_0x19e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_IsExecTime");


    ctx->pc = 0x19e920u;

    // 0x19e920: 0x27bdff80
    ctx->pc = 0x19e920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19e924: 0x3c020026
    ctx->pc = 0x19e924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19e928: 0xffb40050
    ctx->pc = 0x19e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x19e92c: 0xffb30040
    ctx->pc = 0x19e92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19e930: 0xc0a02d
    ctx->pc = 0x19e930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e934: 0xffb10020
    ctx->pc = 0x19e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19e938: 0xa0982d
    ctx->pc = 0x19e938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e93c: 0xffb50060
    ctx->pc = 0x19e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x19e940: 0x80882d
    ctx->pc = 0x19e940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e944: 0xffb20030
    ctx->pc = 0x19e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19e948: 0x2455dee8
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294958824));
    // 0x19e94c: 0xffb00010
    ctx->pc = 0x19e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19e950: 0x100902d
    ctx->pc = 0x19e950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e954: 0xffbf0070
    ctx->pc = 0x19e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19e958: 0xe0802d
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e95c: 0x3a0282d
    ctx->pc = 0x19e95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e960: 0xc0677d0
    ctx->pc = 0x19E960u;
    SET_GPR_U32(ctx, 31, 0x19E968u);
    ctx->pc = 0x19E964u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19DF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTime_0x19df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E968u; }
        else if (ctx->pc != 0x19E968u) { ctx->pc = 0x19E968u; }
    }
    if (ctx->pc != 0x19E968u) { return; }
    ctx->pc = 0x19E968u;
    // 0x19e968: 0x8fa50004
    ctx->pc = 0x19e968u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19e96c: 0x24060001
    ctx->pc = 0x19e96cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e970: 0x14a6000b
    ctx->pc = 0x19E970u;
    {
        const bool branch_taken_0x19e970 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x19E974u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19e970) {
            ctx->pc = 0x19E9A0u;
            goto label_19e9a0;
        }
    }
    ctx->pc = 0x19E978u;
    // 0x19e978: 0x8fa30000
    ctx->pc = 0x19e978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e97c: 0x2402fffe
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19e980: 0x1062002e
    ctx->pc = 0x19E980u;
    {
        const bool branch_taken_0x19e980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19E984u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e980) {
            ctx->pc = 0x19EA3Cu;
            goto label_19ea3c;
        }
    }
    ctx->pc = 0x19E988u;
    // 0x19e988: 0x260282d
    ctx->pc = 0x19e988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e98c: 0x280302d
    ctx->pc = 0x19e98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e990: 0xc067a9a
    ctx->pc = 0x19E990u;
    SET_GPR_U32(ctx, 31, 0x19E998u);
    ctx->pc = 0x19E994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EA68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_IsTakeOffExecTime_0x19ea68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E998u; }
        else if (ctx->pc != 0x19E998u) { ctx->pc = 0x19E998u; }
    }
    if (ctx->pc != 0x19E998u) { return; }
    ctx->pc = 0x19E998u;
    // 0x19e998: 0x1000002a
    ctx->pc = 0x19E998u;
    {
        const bool branch_taken_0x19e998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E99Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x19e998) {
            ctx->pc = 0x19EA44u;
            goto label_19ea44;
        }
    }
    ctx->pc = 0x19E9A0u;
label_19e9a0:
    // 0x19e9a0: 0x8ea20008
    ctx->pc = 0x19e9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x19e9a4: 0x44930000
    ctx->pc = 0x19e9a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x19e9a8: 0x46800020
    ctx->pc = 0x19e9a8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x19e9ac: 0x3c01461c
    ctx->pc = 0x19e9acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x19e9b0: 0x34214000
    ctx->pc = 0x19e9b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x19e9b4: 0x44811000
    ctx->pc = 0x19e9b4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x19e9b8: 0x50400001
    ctx->pc = 0x19E9B8u;
    {
        const bool branch_taken_0x19e9b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19e9b8) {
            ctx->pc = 0x19E9BCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19E9C0u;
            goto label_19e9c0;
        }
    }
    ctx->pc = 0x19E9C0u;
label_19e9c0:
    // 0x19e9c0: 0x44940800
    ctx->pc = 0x19e9c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 20);
    // 0x19e9c4: 0x46800860
    ctx->pc = 0x19e9c4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x19e9c8: 0x8fa30000
    ctx->pc = 0x19e9c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e9cc: 0x44851800
    ctx->pc = 0x19e9ccu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 5);
    // 0x19e9d0: 0x468018e0
    ctx->pc = 0x19e9d0u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x19e9d4: 0x82001a
    ctx->pc = 0x19e9d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19e9d8: 0x46020002
    ctx->pc = 0x19e9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19e9dc: 0x8e2509d0
    ctx->pc = 0x19e9dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 2512)));
    // 0x19e9e0: 0x24020002
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e9e4: 0x0
    ctx->pc = 0x19e9e4u;
    // NOP
    // 0x19e9e8: 0x0
    ctx->pc = 0x19e9e8u;
    // NOP
    // 0x19e9ec: 0x46010303
    ctx->pc = 0x19e9ecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x19e9f0: 0x2012
    ctx->pc = 0x19e9f0u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x19e9f4: 0x641821
    ctx->pc = 0x19e9f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e9f8: 0x44830000
    ctx->pc = 0x19e9f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x19e9fc: 0x46800020
    ctx->pc = 0x19e9fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x19ea00: 0x46020002
    ctx->pc = 0x19ea00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19ea04: 0x0
    ctx->pc = 0x19ea04u;
    // NOP
    // 0x19ea08: 0x0
    ctx->pc = 0x19ea08u;
    // NOP
    // 0x19ea0c: 0x46030343
    ctx->pc = 0x19ea0cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[3];
    // 0x19ea10: 0x14a20006
    ctx->pc = 0x19EA10u;
    {
        const bool branch_taken_0x19ea10 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x19EA14u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x19ea10) {
            ctx->pc = 0x19EA2Cu;
            goto label_19ea2c;
        }
    }
    ctx->pc = 0x19EA18u;
    // 0x19ea18: 0x220202d
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea1c: 0xc067ab6
    ctx->pc = 0x19EA1Cu;
    SET_GPR_U32(ctx, 31, 0x19EA24u);
    ctx->pc = 0x19EA20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EAD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_IsGrExecTime_0x19ead8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA24u; }
        else if (ctx->pc != 0x19EA24u) { ctx->pc = 0x19EA24u; }
    }
    if (ctx->pc != 0x19EA24u) { return; }
    ctx->pc = 0x19EA24u;
    // 0x19ea24: 0x10000007
    ctx->pc = 0x19EA24u;
    {
        const bool branch_taken_0x19ea24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EA28u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x19ea24) {
            ctx->pc = 0x19EA44u;
            goto label_19ea44;
        }
    }
    ctx->pc = 0x19EA2Cu;
label_19ea2c:
    // 0x19ea2c: 0x460d6036
    ctx->pc = 0x19ea2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ea30: 0x0
    ctx->pc = 0x19ea30u;
    // NOP
    // 0x19ea34: 0x45020002
    ctx->pc = 0x19EA34u;
    {
        const bool branch_taken_0x19ea34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ea34) {
            ctx->pc = 0x19EA38u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x19EA40u;
            goto label_19ea40;
        }
    }
    ctx->pc = 0x19EA3Cu;
label_19ea3c:
    // 0x19ea3c: 0xae060000
    ctx->pc = 0x19ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_19ea40:
    // 0x19ea40: 0xdfbf0070
    ctx->pc = 0x19ea40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19ea44:
    // 0x19ea44: 0xdfb50060
    ctx->pc = 0x19ea44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ea48: 0xdfb40050
    ctx->pc = 0x19ea48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ea4c: 0xdfb30040
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ea50: 0xdfb20030
    ctx->pc = 0x19ea50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ea54: 0xdfb10020
    ctx->pc = 0x19ea54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ea58: 0xdfb00010
    ctx->pc = 0x19ea58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ea5c: 0x3e00008
    ctx->pc = 0x19EA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EA60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E9A0u: goto label_19e9a0;
            case 0x19E9C0u: goto label_19e9c0;
            case 0x19EA2Cu: goto label_19ea2c;
            case 0x19EA3Cu: goto label_19ea3c;
            case 0x19EA40u: goto label_19ea40;
            case 0x19EA44u: goto label_19ea44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EA64u;
}
