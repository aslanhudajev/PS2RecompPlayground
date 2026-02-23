#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdCalcWorkStmBuf
// Address: 0x18e770 - 0x18e838
void mwPlySfdCalcWorkStmBuf_0x18e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdCalcWorkStmBuf");


    ctx->pc = 0x18e770u;

    // 0x18e770: 0xa0602d
    ctx->pc = 0x18e770u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e774: 0xc0682d
    ctx->pc = 0x18e774u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e778: 0x24020002
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e77c: 0x14820014
    ctx->pc = 0x18E77Cu;
    {
        const bool branch_taken_0x18e77c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x18E780u;
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e77c) {
            ctx->pc = 0x18E7D0u;
            goto label_18e7d0;
        }
    }
    ctx->pc = 0x18E784u;
    // 0x18e784: 0x2403ffff
    ctx->pc = 0x18e784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e788: 0x25820007
    ctx->pc = 0x18e788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 7));
    // 0x18e78c: 0x6c202a
    ctx->pc = 0x18e78cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 12)));
    // 0x18e790: 0x340581c0
    ctx->pc = 0x18e790u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33216));
    // 0x18e794: 0x184100b
    ctx->pc = 0x18e794u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 12));
    // 0x18e798: 0x210c3
    ctx->pc = 0x18e798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18e79c: 0x24440800
    ctx->pc = 0x18e79cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2048));
    // 0x18e7a0: 0x24420fff
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4095));
    // 0x18e7a4: 0x64182a
    ctx->pc = 0x18e7a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x18e7a8: 0x83100b
    ctx->pc = 0x18e7a8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x18e7ac: 0x212c3
    ctx->pc = 0x18e7acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x18e7b0: 0x212c0
    ctx->pc = 0x18e7b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x18e7b4: 0xada20000
    ctx->pc = 0x18e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x18e7b8: 0xadc00000
    ctx->pc = 0x18e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x18e7bc: 0xad000000
    ctx->pc = 0x18e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x18e7c0: 0xad200000
    ctx->pc = 0x18e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x18e7c4: 0xad400000
    ctx->pc = 0x18e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x18e7c8: 0x3e00008
    ctx->pc = 0x18E7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E7CCu;
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E7D0u: goto label_18e7d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E7D0u;
label_18e7d0:
    // 0x18e7d0: 0x2404ffff
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e7d4: 0x25820007
    ctx->pc = 0x18e7d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 7));
    // 0x18e7d8: 0x8c182a
    ctx->pc = 0x18e7d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 12)));
    // 0x18e7dc: 0x3c070004
    ctx->pc = 0x18e7dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)4 << 16));
    // 0x18e7e0: 0x183100b
    ctx->pc = 0x18e7e0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 12));
    // 0x18e7e4: 0x3c060001
    ctx->pc = 0x18e7e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x18e7e8: 0x210c3
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18e7ec: 0x34c62000
    ctx->pc = 0x18e7ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 8192));
    // 0x18e7f0: 0x24430800
    ctx->pc = 0x18e7f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2048));
    // 0x18e7f4: 0x3c050001
    ctx->pc = 0x18e7f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    // 0x18e7f8: 0x83202a
    ctx->pc = 0x18e7f8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x18e7fc: 0x24420fff
    ctx->pc = 0x18e7fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4095));
    // 0x18e800: 0x64100b
    ctx->pc = 0x18e800u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x18e804: 0x34a52120
    ctx->pc = 0x18e804u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8480));
    // 0x18e808: 0x212c3
    ctx->pc = 0x18e808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x18e80c: 0x340381c0
    ctx->pc = 0x18e80cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 33216));
    // 0x18e810: 0x212c0
    ctx->pc = 0x18e810u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x18e814: 0xada20000
    ctx->pc = 0x18e814u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x18e818: 0xadc00000
    ctx->pc = 0x18e818u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x18e81c: 0x8da20000
    ctx->pc = 0x18e81cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x18e820: 0x471021
    ctx->pc = 0x18e820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18e824: 0xad020000
    ctx->pc = 0x18e824u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x18e828: 0xad260000
    ctx->pc = 0x18e828u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x18e82c: 0xad450000
    ctx->pc = 0x18e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x18e830: 0x3e00008
    ctx->pc = 0x18E830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E834u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E7D0u: goto label_18e7d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E838u;
}
