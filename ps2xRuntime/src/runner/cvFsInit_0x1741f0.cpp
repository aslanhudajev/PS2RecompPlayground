#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsInit
// Address: 0x1741f0 - 0x1742a8
void cvFsInit_0x1741f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsInit");


    ctx->pc = 0x1741f0u;

    // 0x1741f0: 0x27bdffd0
    ctx->pc = 0x1741f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1741f4: 0x3c020024
    ctx->pc = 0x1741f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1741f8: 0xffb00000
    ctx->pc = 0x1741f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1741fc: 0x3c100024
    ctx->pc = 0x1741fcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x174200: 0xffbf0020
    ctx->pc = 0x174200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174204: 0x8e03876c
    ctx->pc = 0x174204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294936428)));
    // 0x174208: 0xffb10010
    ctx->pc = 0x174208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17420c: 0x8c448760
    ctx->pc = 0x17420cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294936416)));
    // 0x174210: 0x1460001e
    ctx->pc = 0x174210u;
    {
        const bool branch_taken_0x174210 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x174214u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294936428)));
        if (branch_taken_0x174210) {
            ctx->pc = 0x17428Cu;
            goto label_17428c;
        }
    }
    ctx->pc = 0x174218u;
    // 0x174218: 0x3c02002e
    ctx->pc = 0x174218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17421c: 0x3c11002e
    ctx->pc = 0x17421cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)46 << 16));
    // 0x174220: 0x2442f1a8
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963624));
    // 0x174224: 0x24030027
    ctx->pc = 0x174224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
label_174228:
    // 0x174228: 0xac400000
    ctx->pc = 0x174228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17422c: 0x2463ffff
    ctx->pc = 0x17422cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x174230: 0xac400004
    ctx->pc = 0x174230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x174234: 0x24420008
    ctx->pc = 0x174234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x174238: 0x0
    ctx->pc = 0x174238u;
    // NOP
    // 0x17423c: 0x461fffa
    ctx->pc = 0x17423Cu;
    {
        const bool branch_taken_0x17423c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17423c) {
            ctx->pc = 0x174228u;
            goto label_174228;
        }
    }
    ctx->pc = 0x174244u;
    // 0x174244: 0x3c02002e
    ctx->pc = 0x174244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x174248: 0x2403001f
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x17424c: 0x2442f2e8
    ctx->pc = 0x17424cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963944));
    // 0x174250: 0x244201f4
    ctx->pc = 0x174250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 500));
    // 0x174254: 0x0
    ctx->pc = 0x174254u;
    // NOP
label_174258:
    // 0x174258: 0xa0400000
    ctx->pc = 0x174258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17425c: 0x2463ffff
    ctx->pc = 0x17425cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x174260: 0x2442fff0
    ctx->pc = 0x174260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x174264: 0x0
    ctx->pc = 0x174264u;
    // NOP
    // 0x174268: 0x0
    ctx->pc = 0x174268u;
    // NOP
    // 0x17426c: 0x461fffa
    ctx->pc = 0x17426Cu;
    {
        const bool branch_taken_0x17426c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17426c) {
            ctx->pc = 0x174258u;
            goto label_174258;
        }
    }
    ctx->pc = 0x174274u;
    // 0x174274: 0x2624f4e8
    ctx->pc = 0x174274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294964456));
    // 0x174278: 0x282d
    ctx->pc = 0x174278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17427c: 0xc050cfe
    ctx->pc = 0x17427Cu;
    SET_GPR_U32(ctx, 31, 0x174284u);
    ctx->pc = 0x174280u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174284u; }
        else if (ctx->pc != 0x174284u) { ctx->pc = 0x174284u; }
    }
    if (ctx->pc != 0x174284u) { return; }
    ctx->pc = 0x174284u;
    // 0x174284: 0xa220f4e8
    ctx->pc = 0x174284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294964456), (uint8_t)GPR_U32(ctx, 0));
    // 0x174288: 0x8e02876c
    ctx->pc = 0x174288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294936428)));
label_17428c:
    // 0x17428c: 0xdfbf0020
    ctx->pc = 0x17428cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174290: 0x24420001
    ctx->pc = 0x174290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x174294: 0xdfb10010
    ctx->pc = 0x174294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174298: 0xae02876c
    ctx->pc = 0x174298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936428), GPR_U32(ctx, 2));
    // 0x17429c: 0xdfb00000
    ctx->pc = 0x17429cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1742a0: 0x3e00008
    ctx->pc = 0x1742A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174228u: goto label_174228;
            case 0x174258u: goto label_174258;
            case 0x17428Cu: goto label_17428c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1742A8u;
}
