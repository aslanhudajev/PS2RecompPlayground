#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MojiCount__8MojiUchiFv
// Address: 0x224940 - 0x224a18
void MojiCount__8MojiUchiFv_0x224940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MojiCount__8MojiUchiFv");


    ctx->pc = 0x224940u;

    // 0x224940: 0x83838e80
    ctx->pc = 0x224940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938240)));
    // 0x224944: 0x14600003
    ctx->pc = 0x224944u;
    {
        const bool branch_taken_0x224944 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x224948u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x224944) {
            ctx->pc = 0x224954u;
            goto label_224954;
        }
    }
    ctx->pc = 0x22494Cu;
    // 0x22494c: 0xaf808e7c
    ctx->pc = 0x22494cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 0));
    // 0x224950: 0xa3838e80
    ctx->pc = 0x224950u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938240), (uint8_t)GPR_U32(ctx, 3));
label_224954:
    // 0x224954: 0x8c850010
    ctx->pc = 0x224954u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x224958: 0x14a0001f
    ctx->pc = 0x224958u;
    {
        const bool branch_taken_0x224958 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x22495Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x224958) {
            ctx->pc = 0x2249D8u;
            goto label_2249d8;
        }
    }
    ctx->pc = 0x224960u;
    // 0x224960: 0x3c010050
    ctx->pc = 0x224960u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224964: 0x8023fec5
    ctx->pc = 0x224964u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224968: 0x1460000e
    ctx->pc = 0x224968u;
    {
        const bool branch_taken_0x224968 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x224968) {
            ctx->pc = 0x2249A4u;
            goto label_2249a4;
        }
    }
    ctx->pc = 0x224970u;
    // 0x224970: 0x8f858e7c
    ctx->pc = 0x224970u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x224974: 0x24030006
    ctx->pc = 0x224974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x224978: 0xa3001a
    ctx->pc = 0x224978u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x22497c: 0x0
    ctx->pc = 0x22497cu;
    // NOP
    // 0x224980: 0x0
    ctx->pc = 0x224980u;
    // NOP
    // 0x224984: 0x1810
    ctx->pc = 0x224984u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x224988: 0x14600019
    ctx->pc = 0x224988u;
    {
        const bool branch_taken_0x224988 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x224988) {
            ctx->pc = 0x2249F0u;
            goto label_2249f0;
        }
    }
    ctx->pc = 0x224990u;
    // 0x224990: 0x8c83000c
    ctx->pc = 0x224990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x224994: 0x24630001
    ctx->pc = 0x224994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x224998: 0xac83000c
    ctx->pc = 0x224998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x22499c: 0x10000014
    ctx->pc = 0x22499Cu;
    {
        const bool branch_taken_0x22499c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2249A0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 0));
        if (branch_taken_0x22499c) {
            ctx->pc = 0x2249F0u;
            goto label_2249f0;
        }
    }
    ctx->pc = 0x2249A4u;
label_2249a4:
    // 0x2249a4: 0x8f858e7c
    ctx->pc = 0x2249a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x2249a8: 0x4a10004
    ctx->pc = 0x2249A8u;
    {
        const bool branch_taken_0x2249a8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2249ACu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2249a8) {
            ctx->pc = 0x2249BCu;
            goto label_2249bc;
        }
    }
    ctx->pc = 0x2249B0u;
    // 0x2249b0: 0x10600002
    ctx->pc = 0x2249B0u;
    {
        const bool branch_taken_0x2249b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2249b0) {
            ctx->pc = 0x2249BCu;
            goto label_2249bc;
        }
    }
    ctx->pc = 0x2249B8u;
    // 0x2249b8: 0x2463fffe
    ctx->pc = 0x2249b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_2249bc:
    // 0x2249bc: 0x1460000c
    ctx->pc = 0x2249BCu;
    {
        const bool branch_taken_0x2249bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2249bc) {
            ctx->pc = 0x2249F0u;
            goto label_2249f0;
        }
    }
    ctx->pc = 0x2249C4u;
    // 0x2249c4: 0x8c83000c
    ctx->pc = 0x2249c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2249c8: 0x24630001
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2249cc: 0xac83000c
    ctx->pc = 0x2249ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2249d0: 0x10000007
    ctx->pc = 0x2249D0u;
    {
        const bool branch_taken_0x2249d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2249D4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 0));
        if (branch_taken_0x2249d0) {
            ctx->pc = 0x2249F0u;
            goto label_2249f0;
        }
    }
    ctx->pc = 0x2249D8u;
label_2249d8:
    // 0x2249d8: 0x14a30005
    ctx->pc = 0x2249D8u;
    {
        const bool branch_taken_0x2249d8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x2249d8) {
            ctx->pc = 0x2249F0u;
            goto label_2249f0;
        }
    }
    ctx->pc = 0x2249E0u;
    // 0x2249e0: 0x8c83000c
    ctx->pc = 0x2249e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2249e4: 0x24630001
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2249e8: 0xac83000c
    ctx->pc = 0x2249e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2249ec: 0xaf808e7c
    ctx->pc = 0x2249ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 0));
label_2249f0:
    // 0x2249f0: 0x8f838e7c
    ctx->pc = 0x2249f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x2249f4: 0x24630001
    ctx->pc = 0x2249f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2249f8: 0xaf838e7c
    ctx->pc = 0x2249f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 3));
    // 0x2249fc: 0x8c83000c
    ctx->pc = 0x2249fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x224a00: 0x286103e9
    ctx->pc = 0x224a00u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 1001));
    // 0x224a04: 0x14200002
    ctx->pc = 0x224A04u;
    {
        const bool branch_taken_0x224a04 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x224A08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x224a04) {
            ctx->pc = 0x224A10u;
            goto label_224a10;
        }
    }
    ctx->pc = 0x224A0Cu;
    // 0x224a0c: 0xa083101c
    ctx->pc = 0x224a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4124), (uint8_t)GPR_U32(ctx, 3));
label_224a10:
    // 0x224a10: 0x3e00008
    ctx->pc = 0x224A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224954u: goto label_224954;
            case 0x2249A4u: goto label_2249a4;
            case 0x2249BCu: goto label_2249bc;
            case 0x2249D8u: goto label_2249d8;
            case 0x2249F0u: goto label_2249f0;
            case 0x224A10u: goto label_224a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224A18u;
}
