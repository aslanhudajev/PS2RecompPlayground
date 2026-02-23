#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Function: ADXPD_Create
// Address: 0x173eb0 - 0x173f70
void ADXPD_Create_0x173eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_Create");

    std::cerr << "[ADXPD_Create] entry" << std::endl;
    ctx->pc = 0x173eb0u;

    // 0x173eb0: 0x27bdffd0
    ctx->pc = 0x173eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173eb4: 0x3c040024
    ctx->pc = 0x173eb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x173eb8: 0xffb10010
    ctx->pc = 0x173eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x173ebc: 0x8c8285c0
    ctx->pc = 0x173ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294936000)));
    // 0x173ec0: 0x882d
    ctx->pc = 0x173ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ec4: 0xffbf0020
    ctx->pc = 0x173ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x173ec8: 0x10400009
    ctx->pc = 0x173EC8u;
    {
        const bool branch_taken_0x173ec8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173ECCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x173ec8) {
            ctx->pc = 0x173EF0u;
            goto label_173ef0;
        }
    }
    ctx->pc = 0x173ED0u;
    // 0x173ed0: 0x248385c0
    ctx->pc = 0x173ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294936000));
    // 0x173ed4: 0x26310001
    ctx->pc = 0x173ed4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_173ed8:
    { static int _n=0; if (++_n<=20 || (_n%5000)==0) std::cerr << "[ADXPD_Create] loop_173ed8 r17=" << GPR_S32(ctx,17) << " (n=" << _n << ")" << std::endl; }
    // 0x173ed8: 0x2a220008
    ctx->pc = 0x173ed8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x173edc: 0x10400004
    ctx->pc = 0x173EDCu;
    {
        const bool branch_taken_0x173edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173EE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 52));
        if (branch_taken_0x173edc) {
            ctx->pc = 0x173EF0u;
            goto label_173ef0;
        }
    }
    ctx->pc = 0x173EE4u;
    // 0x173ee4: 0x8c620000
    ctx->pc = 0x173ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173ee8: 0x5440fffb
    ctx->pc = 0x173EE8u;
    {
        const bool branch_taken_0x173ee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x173ee8) {
            ctx->pc = 0x173EECu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x173ED8u;
            goto label_173ed8;
        }
    }
    ctx->pc = 0x173EF0u;
label_173ef0:
    // 0x173ef0: 0x24020008
    ctx->pc = 0x173ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x173ef4: 0x16220003
    ctx->pc = 0x173EF4u;
    {
        const bool branch_taken_0x173ef4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x173EF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 52));
        if (branch_taken_0x173ef4) {
            ctx->pc = 0x173F04u;
            goto label_173f04;
        }
    }
    ctx->pc = 0x173EFCu;
    // 0x173efc: 0x10000017
    ctx->pc = 0x173EFCu;
    {
        const bool branch_taken_0x173efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173F00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173efc) {
            ctx->pc = 0x173F5Cu;
            goto label_173f5c;
        }
    }
    ctx->pc = 0x173F04u;
label_173f04:
    // 0x173f04: 0x248285c0
    ctx->pc = 0x173f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294936000));
    // 0x173f08: 0x2308018
    ctx->pc = 0x173f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x173f0c: 0x282d
    ctx->pc = 0x173f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f10: 0x24060034
    ctx->pc = 0x173f10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 52));
    // 0x173f14: 0x2028021
    ctx->pc = 0x173f14u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x173f18: 0xc050cfe
    ctx->pc = 0x173F18u;
    SET_GPR_U32(ctx, 31, 0x173F20u);
    ctx->pc = 0x173F1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    std::cerr << "[ADXPD_Create] before memset#1" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F20u; }
        else if (ctx->pc != 0x173F20u) { ctx->pc = 0x173F20u; }
    }
    if (ctx->pc != 0x173F20u) { return; }
    ctx->pc = 0x173F20u;
    // 0x173f20: 0x24020001
    ctx->pc = 0x173f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173f24: 0x26070032
    ctx->pc = 0x173f24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 50));
    // 0x173f28: 0xae020000
    ctx->pc = 0x173f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x173f2c: 0x240401f4
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 500));
    // 0x173f30: 0xae110004
    ctx->pc = 0x173f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x173f34: 0x3405ac44
    ctx->pc = 0x173f34u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 44100));
    // 0x173f38: 0xae000008
    ctx->pc = 0x173f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x173f3c: 0x26060030
    ctx->pc = 0x173f3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 48));
    // 0x173f40: 0xc05a4f8
    ctx->pc = 0x173F40u;
    SET_GPR_U32(ctx, 31, 0x173F48u);
    ctx->pc = 0x173F44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1693E0u;
    std::cerr << "[ADXPD_Create] before ADX_GetCoefficient" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_GetCoefficient_0x1693e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F48u; }
        else if (ctx->pc != 0x173F48u) { ctx->pc = 0x173F48u; }
    }
    if (ctx->pc != 0x173F48u) { return; }
    ctx->pc = 0x173F48u;
    // 0x173f48: 0x26040028
    ctx->pc = 0x173f48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    // 0x173f4c: 0x282d
    ctx->pc = 0x173f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f50: 0xc050cfe
    ctx->pc = 0x173F50u;
    SET_GPR_U32(ctx, 31, 0x173F58u);
    ctx->pc = 0x173F54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F58u; }
        else if (ctx->pc != 0x173F58u) { ctx->pc = 0x173F58u; }
    }
    if (ctx->pc != 0x173F58u) { return; }
    ctx->pc = 0x173F58u;
    // 0x173f58: 0x200102d
    ctx->pc = 0x173f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173f5c:
    // 0x173f5c: 0xdfbf0020
    ctx->pc = 0x173f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173f60: 0xdfb10010
    ctx->pc = 0x173f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f64: 0xdfb00000
    ctx->pc = 0x173f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f68: 0x3e00008
    ctx->pc = 0x173F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173F6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173ED8u: goto label_173ed8;
            case 0x173EF0u: goto label_173ef0;
            case 0x173F04u: goto label_173f04;
            case 0x173F5Cu: goto label_173f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173F70u;
}
