#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskName_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd6f0 - 0x1fd774
void entryOskName_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskName_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd6f0u;

    // 0x1fd6f0: 0x27bdffe0
    ctx->pc = 0x1fd6f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd6f4: 0x7fbf0010
    ctx->pc = 0x1fd6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fd6f8: 0x7fb00000
    ctx->pc = 0x1fd6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd6fc: 0x3c010052
    ctx->pc = 0x1fd6fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd700: 0x8c2494b0
    ctx->pc = 0x1fd700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd704: 0x3c020052
    ctx->pc = 0x1fd704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd708: 0x244394d0
    ctx->pc = 0x1fd708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd70c: 0x2402fffe
    ctx->pc = 0x1fd70cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fd710: 0x642021
    ctx->pc = 0x1fd710u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd714: 0x80830000
    ctx->pc = 0x1fd714u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd718: 0x14620004
    ctx->pc = 0x1FD718u;
    {
        const bool branch_taken_0x1fd718 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1FD71Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fd718) {
            ctx->pc = 0x1FD72Cu;
            goto label_1fd72c;
        }
    }
    ctx->pc = 0x1FD720u;
    // 0x1fd720: 0xa0800000
    ctx->pc = 0x1fd720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fd724: 0x1000000f
    ctx->pc = 0x1FD724u;
    {
        const bool branch_taken_0x1fd724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD728u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1fd724) {
            ctx->pc = 0x1FD764u;
            goto label_1fd764;
        }
    }
    ctx->pc = 0x1FD72Cu;
label_1fd72c:
    // 0x1fd72c: 0x3c010052
    ctx->pc = 0x1fd72cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd730: 0x8c2294cc
    ctx->pc = 0x1fd730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939852)));
    // 0x1fd734: 0x14400009
    ctx->pc = 0x1FD734u;
    {
        const bool branch_taken_0x1fd734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD738u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1fd734) {
            ctx->pc = 0x1FD75Cu;
            goto label_1fd75c;
        }
    }
    ctx->pc = 0x1FD73Cu;
    // 0x1fd73c: 0x3c010052
    ctx->pc = 0x1fd73cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd740: 0x8c2694c4
    ctx->pc = 0x1fd740u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd744: 0x3c010050
    ctx->pc = 0x1fd744u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd748: 0x8c240c80
    ctx->pc = 0x1fd748u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fd74c: 0x3c010052
    ctx->pc = 0x1fd74cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd750: 0xc05aeba
    ctx->pc = 0x1FD750u;
    SET_GPR_U32(ctx, 31, 0x1FD758u);
    ctx->pc = 0x1FD754u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939840)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD758u; }
        else if (ctx->pc != 0x1FD758u) { ctx->pc = 0x1FD758u; }
    }
    if (ctx->pc != 0x1FD758u) { return; }
    ctx->pc = 0x1FD758u;
    // 0x1fd758: 0x24020002
    ctx->pc = 0x1fd758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1fd75c:
    // 0x1fd75c: 0xae02000c
    ctx->pc = 0x1fd75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1fd760: 0x24020001
    ctx->pc = 0x1fd760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1fd764:
    // 0x1fd764: 0x7bbf0010
    ctx->pc = 0x1fd764u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd768: 0x7bb00000
    ctx->pc = 0x1fd768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd76c: 0x3e00008
    ctx->pc = 0x1FD76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD770u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD75Cu: goto label_1fd75c;
            case 0x1FD764u: goto label_1fd764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD774u;
}
