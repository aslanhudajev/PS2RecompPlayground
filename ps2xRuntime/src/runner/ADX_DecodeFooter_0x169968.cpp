#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeFooter
// Address: 0x169968 - 0x1699c8
void ADX_DecodeFooter_0x169968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeFooter");


    ctx->pc = 0x169968u;

    // 0x169968: 0x28a50010
    ctx->pc = 0x169968u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 16));
    // 0x16996c: 0x10a00003
    ctx->pc = 0x16996Cu;
    {
        const bool branch_taken_0x16996c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x169970u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16996c) {
            ctx->pc = 0x16997Cu;
            goto label_16997c;
        }
    }
    ctx->pc = 0x169974u;
    // 0x169974: 0x3e00008
    ctx->pc = 0x169974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16997Cu: goto label_16997c;
            case 0x1699A4u: goto label_1699a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16997Cu;
label_16997c:
    // 0x16997c: 0x94e20000
    ctx->pc = 0x16997cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x169980: 0x34048001
    ctx->pc = 0x169980u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32769));
    // 0x169984: 0x21a00
    ctx->pc = 0x169984u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169988: 0x21202
    ctx->pc = 0x169988u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x16998c: 0x431025
    ctx->pc = 0x16998cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169990: 0x3042ffff
    ctx->pc = 0x169990u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x169994: 0x10440003
    ctx->pc = 0x169994u;
    {
        const bool branch_taken_0x169994 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x169998u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x169994) {
            ctx->pc = 0x1699A4u;
            goto label_1699a4;
        }
    }
    ctx->pc = 0x16999Cu;
    // 0x16999c: 0x3e00008
    ctx->pc = 0x16999Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16997Cu: goto label_16997c;
            case 0x1699A4u: goto label_1699a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1699A4u;
label_1699a4:
    // 0x1699a4: 0x94e30002
    ctx->pc = 0x1699a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1699a8: 0x102d
    ctx->pc = 0x1699a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699ac: 0x32200
    ctx->pc = 0x1699acu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1699b0: 0x31a02
    ctx->pc = 0x1699b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x1699b4: 0x852024
    ctx->pc = 0x1699b4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1699b8: 0x641825
    ctx->pc = 0x1699b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1699bc: 0x24630004
    ctx->pc = 0x1699bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1699c0: 0x3e00008
    ctx->pc = 0x1699C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699C4u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16997Cu: goto label_16997c;
            case 0x1699A4u: goto label_1699a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1699C8u;
}
