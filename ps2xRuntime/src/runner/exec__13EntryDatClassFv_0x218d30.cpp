#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__13EntryDatClassFv
// Address: 0x218d30 - 0x218dc0
void exec__13EntryDatClassFv_0x218d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__13EntryDatClassFv");


    ctx->pc = 0x218d30u;

    // 0x218d30: 0x27bdffc0
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218d34: 0x7fbf0030
    ctx->pc = 0x218d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x218d38: 0x7fb20020
    ctx->pc = 0x218d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218d3c: 0x7fb10010
    ctx->pc = 0x218d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218d40: 0x7fb00000
    ctx->pc = 0x218d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218d44: 0x84911000
    ctx->pc = 0x218d44u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x218d48: 0x84831002
    ctx->pc = 0x218d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x218d4c: 0x71082a
    ctx->pc = 0x218d4cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x218d50: 0x14200003
    ctx->pc = 0x218D50u;
    {
        const bool branch_taken_0x218d50 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x218D54u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218d50) {
            ctx->pc = 0x218D60u;
            goto label_218d60;
        }
    }
    ctx->pc = 0x218D58u;
    // 0x218d58: 0x10000002
    ctx->pc = 0x218D58u;
    {
        const bool branch_taken_0x218d58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218D5Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218d58) {
            ctx->pc = 0x218D64u;
            goto label_218d64;
        }
    }
    ctx->pc = 0x218D60u;
label_218d60:
    // 0x218d60: 0x24020100
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
label_218d64:
    // 0x218d64: 0x628021
    ctx->pc = 0x218d64u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218d68: 0x16300003
    ctx->pc = 0x218D68u;
    {
        const bool branch_taken_0x218d68 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x218D6Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218d68) {
            ctx->pc = 0x218D78u;
            goto label_218d78;
        }
    }
    ctx->pc = 0x218D70u;
    // 0x218d70: 0x1000000d
    ctx->pc = 0x218D70u;
    {
        const bool branch_taken_0x218d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218D74u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218d70) {
            ctx->pc = 0x218DA8u;
            goto label_218da8;
        }
    }
    ctx->pc = 0x218D78u;
label_218d78:
    // 0x218d78: 0xc086454
    ctx->pc = 0x218D78u;
    SET_GPR_U32(ctx, 31, 0x218D80u);
    ctx->pc = 0x218D7Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219150u;
    {
        const uint32_t __entryPc = ctx->pc;
        execCore__13EntryDatClassFi_0x219150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D80u; }
        else if (ctx->pc != 0x218D80u) { ctx->pc = 0x218D80u; }
    }
    if (ctx->pc != 0x218D80u) { return; }
    ctx->pc = 0x218D80u;
    // 0x218d80: 0x2403ffff
    ctx->pc = 0x218d80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218d84: 0x14430003
    ctx->pc = 0x218D84u;
    {
        const bool branch_taken_0x218d84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x218D88u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x218d84) {
            ctx->pc = 0x218D94u;
            goto label_218d94;
        }
    }
    ctx->pc = 0x218D8Cu;
    // 0x218d8c: 0x26310001
    ctx->pc = 0x218d8cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x218d90: 0x322200ff
    ctx->pc = 0x218d90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 255));
label_218d94:
    // 0x218d94: 0x16300003
    ctx->pc = 0x218D94u;
    {
        const bool branch_taken_0x218d94 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x218D98u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 4096), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x218d94) {
            ctx->pc = 0x218DA4u;
            goto label_218da4;
        }
    }
    ctx->pc = 0x218D9Cu;
    // 0x218d9c: 0x10000002
    ctx->pc = 0x218D9Cu;
    {
        const bool branch_taken_0x218d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218DA0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218d9c) {
            ctx->pc = 0x218DA8u;
            goto label_218da8;
        }
    }
    ctx->pc = 0x218DA4u;
label_218da4:
    // 0x218da4: 0x24020001
    ctx->pc = 0x218da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_218da8:
    // 0x218da8: 0x7bbf0030
    ctx->pc = 0x218da8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218dac: 0x7bb20020
    ctx->pc = 0x218dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218db0: 0x7bb10010
    ctx->pc = 0x218db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218db4: 0x7bb00000
    ctx->pc = 0x218db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218db8: 0x3e00008
    ctx->pc = 0x218DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218DBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218D60u: goto label_218d60;
            case 0x218D64u: goto label_218d64;
            case 0x218D78u: goto label_218d78;
            case 0x218D94u: goto label_218d94;
            case 0x218DA4u: goto label_218da4;
            case 0x218DA8u: goto label_218da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218DC0u;
}
