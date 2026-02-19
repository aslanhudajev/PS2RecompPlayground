#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbLogGetPkt
// Address: 0x2a31d0 - 0x2a32e0
void ipbLogGetPkt_0x2a31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a31d0u;

    // 0x2a31d0: 0x27bdffc0
    ctx->pc = 0x2a31d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a31d4: 0xffbf0030
    ctx->pc = 0x2a31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a31d8: 0xffb20020
    ctx->pc = 0x2a31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a31dc: 0xffb10010
    ctx->pc = 0x2a31dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a31e0: 0xffb00000
    ctx->pc = 0x2a31e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a31e4: 0x80882d
    ctx->pc = 0x2a31e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31e8: 0x3c020036
    ctx->pc = 0x2a31e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a31ec: 0x8c50dee0
    ctx->pc = 0x2a31ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a31f0: 0x8e03002c
    ctx->pc = 0x2a31f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a31f4: 0x8c72000c
    ctx->pc = 0x2a31f4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a31f8: 0x111080
    ctx->pc = 0x2a31f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a31fc: 0x2421023
    ctx->pc = 0x2a31fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a3200: 0xac62000c
    ctx->pc = 0x2a3200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2a3204: 0x8e02002c
    ctx->pc = 0x2a3204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3208: 0x8c43000c
    ctx->pc = 0x2a3208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a320c: 0x8c420008
    ctx->pc = 0x2a320cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a3210: 0x43102b
    ctx->pc = 0x2a3210u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3214: 0x54400024
    ctx->pc = 0x2A3214u;
    {
        const bool branch_taken_0x2a3214 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a3214) {
            ctx->pc = 0x2A3218u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2A32A8u;
            goto label_2a32a8;
        }
    }
    ctx->pc = 0x2A321Cu;
    // 0x2a321c: 0xc0a8c72
    ctx->pc = 0x2A321Cu;
    SET_GPR_U32(ctx, 31, 0x2A3224u);
    ctx->pc = 0x2A31C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLogWrap_0x2a31c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3224u; }
    }
    if (ctx->pc != 0x2A3224u) { return; }
    ctx->pc = 0x2A3224u;
    // 0x2a3224: 0x8e03002c
    ctx->pc = 0x2a3224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3228: 0x8c620014
    ctx->pc = 0x2a3228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a322c: 0x24420001
    ctx->pc = 0x2a322cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3230: 0x14400005
    ctx->pc = 0x2A3230u;
    {
        const bool branch_taken_0x2a3230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A3234u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2a3230) {
            ctx->pc = 0x2A3248u;
            goto label_2a3248;
        }
    }
    ctx->pc = 0x2A3238u;
    // 0x2a3238: 0x8e03002c
    ctx->pc = 0x2a3238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a323c: 0x3c02ffff
    ctx->pc = 0x2a323cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a3240: 0x3442ffff
    ctx->pc = 0x2a3240u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a3244: 0xac620014
    ctx->pc = 0x2a3244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2a3248:
    // 0x2a3248: 0x8e03002c
    ctx->pc = 0x2a3248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a324c: 0x8c62000c
    ctx->pc = 0x2a324cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a3250: 0x24424e18
    ctx->pc = 0x2a3250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19992));
    // 0x2a3254: 0xac62000c
    ctx->pc = 0x2a3254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2a3258: 0x8e04002c
    ctx->pc = 0x2a3258u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a325c: 0x8c82000c
    ctx->pc = 0x2a325cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a3260: 0x24420004
    ctx->pc = 0x2a3260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a3264: 0x8c830010
    ctx->pc = 0x2a3264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a3268: 0x54430003
    ctx->pc = 0x2A3268u;
    {
        const bool branch_taken_0x2a3268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a3268) {
            ctx->pc = 0x2A326Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2A3278u;
            goto label_2a3278;
        }
    }
    ctx->pc = 0x2A3270u;
    // 0x2a3270: 0x10000002
    ctx->pc = 0x2A3270u;
    {
        const bool branch_taken_0x2a3270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3274u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        if (branch_taken_0x2a3270) {
            ctx->pc = 0x2A327Cu;
            goto label_2a327c;
        }
    }
    ctx->pc = 0x2A3278u;
label_2a3278:
    // 0x2a3278: 0x8c42000c
    ctx->pc = 0x2a3278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2a327c:
    // 0x2a327c: 0xac510004
    ctx->pc = 0x2a327cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x2a3280: 0x8e02002c
    ctx->pc = 0x2a3280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3284: 0x8c43000c
    ctx->pc = 0x2a3284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3288: 0x3c02badb
    ctx->pc = 0x2a3288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a328c: 0x3442eef0
    ctx->pc = 0x2a328cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61168));
    // 0x2a3290: 0xac620000
    ctx->pc = 0x2a3290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a3294: 0x8e02002c
    ctx->pc = 0x2a3294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3298: 0x8c430010
    ctx->pc = 0x2a3298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a329c: 0x3c02badb
    ctx->pc = 0x2a329cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a32a0: 0x10000007
    ctx->pc = 0x2A32A0u;
    {
        const bool branch_taken_0x2a32a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A32A4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61171));
        if (branch_taken_0x2a32a0) {
            ctx->pc = 0x2A32C0u;
            goto label_2a32c0;
        }
    }
    ctx->pc = 0x2A32A8u;
label_2a32a8:
    // 0x2a32a8: 0x8c42000c
    ctx->pc = 0x2a32a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a32ac: 0xac510004
    ctx->pc = 0x2a32acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x2a32b0: 0x8e02002c
    ctx->pc = 0x2a32b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a32b4: 0x8c43000c
    ctx->pc = 0x2a32b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a32b8: 0x3c02badb
    ctx->pc = 0x2a32b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a32bc: 0x3442eef0
    ctx->pc = 0x2a32bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61168));
label_2a32c0:
    // 0x2a32c0: 0xac620000
    ctx->pc = 0x2a32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a32c4: 0x240102d
    ctx->pc = 0x2a32c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32c8: 0xdfbf0030
    ctx->pc = 0x2a32c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a32cc: 0xdfb20020
    ctx->pc = 0x2a32ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a32d0: 0xdfb10010
    ctx->pc = 0x2a32d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a32d4: 0xdfb00000
    ctx->pc = 0x2a32d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a32d8: 0x3e00008
    ctx->pc = 0x2A32D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A32DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3248u: goto label_2a3248;
            case 0x2A3278u: goto label_2a3278;
            case 0x2A327Cu: goto label_2a327c;
            case 0x2A32A8u: goto label_2a32a8;
            case 0x2A32C0u: goto label_2a32c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A32E0u;
}
