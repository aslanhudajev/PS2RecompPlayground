#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeAlloc
// Address: 0x212d30 - 0x212dcc
void AtreeAlloc_0x212d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212d30u;

    // 0x212d30: 0x27bdffd0
    ctx->pc = 0x212d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212d34: 0xffbf0020
    ctx->pc = 0x212d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212d38: 0xffb10010
    ctx->pc = 0x212d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212d3c: 0xffb00000
    ctx->pc = 0x212d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212d40: 0x80302d
    ctx->pc = 0x212d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d44: 0x3c11003c
    ctx->pc = 0x212d44u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x212d48: 0x8e22cb6c
    ctx->pc = 0x212d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294953836)));
    // 0x212d4c: 0x1440000c
    ctx->pc = 0x212D4Cu;
    {
        const bool branch_taken_0x212d4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212D50u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212d4c) {
            ctx->pc = 0x212D80u;
            goto label_212d80;
        }
    }
    ctx->pc = 0x212D54u;
    // 0x212d54: 0x24030e00
    ctx->pc = 0x212d54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3584));
    // 0x212d58: 0x2402ffff
    ctx->pc = 0x212d58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212d5c: 0x46102a
    ctx->pc = 0x212d5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x212d60: 0x60302d
    ctx->pc = 0x212d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d64: 0x82300b
    ctx->pc = 0x212d64u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
    // 0x212d68: 0x3c020032
    ctx->pc = 0x212d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212d6c: 0xac46f4b8
    ctx->pc = 0x212d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964408), GPR_U32(ctx, 6));
    // 0x212d70: 0x24040028
    ctx->pc = 0x212d70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x212d74: 0xc0b4f52
    ctx->pc = 0x212D74u;
    SET_GPR_U32(ctx, 31, 0x212D7Cu);
    ctx->pc = 0x212D78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D7Cu; }
    }
    if (ctx->pc != 0x212D7Cu) { return; }
    ctx->pc = 0x212D7Cu;
    // 0x212d7c: 0xae22cb6c
    ctx->pc = 0x212d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953836), GPR_U32(ctx, 2));
label_212d80:
    // 0x212d80: 0x3c11003c
    ctx->pc = 0x212d80u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x212d84: 0x8e22cb70
    ctx->pc = 0x212d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294953840)));
    // 0x212d88: 0x1440000c
    ctx->pc = 0x212D88u;
    {
        const bool branch_taken_0x212d88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212D8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x212d88) {
            ctx->pc = 0x212DBCu;
            goto label_212dbc;
        }
    }
    ctx->pc = 0x212D90u;
    // 0x212d90: 0x24030c00
    ctx->pc = 0x212d90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3072));
    // 0x212d94: 0x2402ffff
    ctx->pc = 0x212d94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212d98: 0x50102a
    ctx->pc = 0x212d98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x212d9c: 0x62800a
    ctx->pc = 0x212d9cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x212da0: 0x3c020032
    ctx->pc = 0x212da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212da4: 0xac50f4c4
    ctx->pc = 0x212da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964420), GPR_U32(ctx, 16));
    // 0x212da8: 0x240400a0
    ctx->pc = 0x212da8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 160));
    // 0x212dac: 0xc0b4f52
    ctx->pc = 0x212DACu;
    SET_GPR_U32(ctx, 31, 0x212DB4u);
    ctx->pc = 0x212DB0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DB4u; }
    }
    if (ctx->pc != 0x212DB4u) { return; }
    ctx->pc = 0x212DB4u;
    // 0x212db4: 0xae22cb70
    ctx->pc = 0x212db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953840), GPR_U32(ctx, 2));
    // 0x212db8: 0xdfbf0020
    ctx->pc = 0x212db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212dbc:
    // 0x212dbc: 0xdfb10010
    ctx->pc = 0x212dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212dc0: 0xdfb00000
    ctx->pc = 0x212dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212dc4: 0x8084b20
    ctx->pc = 0x212DC4u;
    ctx->pc = 0x212DC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x212C80u;
    AtreeSetEmpty_0x212c80(rdram, ctx, runtime); return;
    ctx->pc = 0x212DCCu;
}
