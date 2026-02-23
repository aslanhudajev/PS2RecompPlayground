#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdCalcWorkFrmBuf
// Address: 0x18e880 - 0x18e934
void mwPlySfdCalcWorkFrmBuf_0x18e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdCalcWorkFrmBuf");


    ctx->pc = 0x18e880u;

    // 0x18e880: 0x27bdffb0
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18e884: 0xffb20030
    ctx->pc = 0x18e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x18e888: 0x37a9000c
    ctx->pc = 0x18e888u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 29), 12));
    // 0x18e88c: 0xffb10020
    ctx->pc = 0x18e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18e890: 0x100902d
    ctx->pc = 0x18e890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e894: 0xffb00010
    ctx->pc = 0x18e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18e898: 0xe0882d
    ctx->pc = 0x18e898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e89c: 0xc0802d
    ctx->pc = 0x18e89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8a0: 0xffbf0040
    ctx->pc = 0x18e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18e8a4: 0x3a0302d
    ctx->pc = 0x18e8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8a8: 0x37a70004
    ctx->pc = 0x18e8a8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
    // 0x18e8ac: 0xc063a0e
    ctx->pc = 0x18E8ACu;
    SET_GPR_U32(ctx, 31, 0x18E8B4u);
    ctx->pc = 0x18E8B0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x18E838u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCalcFrmRes_0x18e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8B4u; }
        else if (ctx->pc != 0x18E8B4u) { ctx->pc = 0x18E8B4u; }
    }
    if (ctx->pc != 0x18E8B4u) { return; }
    ctx->pc = 0x18E8B4u;
    // 0x18e8b4: 0x8fa40000
    ctx->pc = 0x18e8b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e8b8: 0x2406ffff
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e8bc: 0x8fa50004
    ctx->pc = 0x18e8bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18e8c0: 0x3c070008
    ctx->pc = 0x18e8c0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    // 0x18e8c4: 0xc4182a
    ctx->pc = 0x18e8c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
    // 0x18e8c8: 0x2482000f
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 15));
    // 0x18e8cc: 0x83100b
    ctx->pc = 0x18e8ccu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x18e8d0: 0xc5302a
    ctx->pc = 0x18e8d0u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x18e8d4: 0x852018
    ctx->pc = 0x18e8d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x18e8d8: 0x21103
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x18e8dc: 0x2028018
    ctx->pc = 0x18e8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x18e8e0: 0x24a3000f
    ctx->pc = 0x18e8e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 15));
    // 0x18e8e4: 0xa6180b
    ctx->pc = 0x18e8e4u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x18e8e8: 0x34e74910
    ctx->pc = 0x18e8e8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 18704));
    // 0x18e8ec: 0x31903
    ctx->pc = 0x18e8ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x18e8f0: 0xdfbf0040
    ctx->pc = 0x18e8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e8f4: 0x410c0
    ctx->pc = 0x18e8f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x18e8f8: 0x31a80
    ctx->pc = 0x18e8f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 10));
    // 0x18e8fc: 0x441021
    ctx->pc = 0x18e8fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e900: 0x2038018
    ctx->pc = 0x18e900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x18e904: 0x227c2
    ctx->pc = 0x18e904u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 31));
    // 0x18e908: 0x441021
    ctx->pc = 0x18e908u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e90c: 0x21043
    ctx->pc = 0x18e90cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x18e910: 0x471021
    ctx->pc = 0x18e910u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18e914: 0x26100040
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    // 0x18e918: 0xae220000
    ctx->pc = 0x18e918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18e91c: 0xae500000
    ctx->pc = 0x18e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x18e920: 0xdfb20030
    ctx->pc = 0x18e920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e924: 0xdfb10020
    ctx->pc = 0x18e924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e928: 0xdfb00010
    ctx->pc = 0x18e928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e92c: 0x3e00008
    ctx->pc = 0x18E92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E934u;
}
