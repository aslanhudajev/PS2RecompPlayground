#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: srd_check_err_dvd
// Address: 0x1761d0 - 0x176268
void srd_check_err_dvd_0x1761d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("srd_check_err_dvd");


    ctx->pc = 0x1761d0u;

    // 0x1761d0: 0x27bdffe0
    ctx->pc = 0x1761d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1761d4: 0x24020002
    ctx->pc = 0x1761d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1761d8: 0xffb00000
    ctx->pc = 0x1761d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1761dc: 0xffbf0010
    ctx->pc = 0x1761dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1761e0: 0x3c100024
    ctx->pc = 0x1761e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x1761e4: 0x26038770
    ctx->pc = 0x1761e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294936432));
    // 0x1761e8: 0x8c640004
    ctx->pc = 0x1761e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1761ec: 0x1482001b
    ctx->pc = 0x1761ECu;
    {
        const bool branch_taken_0x1761ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1761F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1761ec) {
            ctx->pc = 0x17625Cu;
            goto label_17625c;
        }
    }
    ctx->pc = 0x1761F4u;
    // 0x1761f4: 0xc054782
    ctx->pc = 0x1761F4u;
    SET_GPR_U32(ctx, 31, 0x1761FCu);
    ctx->pc = 0x151E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x151e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761FCu; }
        else if (ctx->pc != 0x1761FCu) { ctx->pc = 0x1761FCu; }
    }
    if (ctx->pc != 0x1761FCu) { return; }
    ctx->pc = 0x1761FCu;
    // 0x1761fc: 0x40282d
    ctx->pc = 0x1761fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176200: 0x24a2ffd0
    ctx->pc = 0x176200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x176204: 0x2c420003
    ctx->pc = 0x176204u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x176208: 0x1440000b
    ctx->pc = 0x176208u;
    {
        const bool branch_taken_0x176208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17620Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294936432));
        if (branch_taken_0x176208) {
            ctx->pc = 0x176238u;
            goto label_176238;
        }
    }
    ctx->pc = 0x176210u;
    // 0x176210: 0x24020014
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x176214: 0x10a20007
    ctx->pc = 0x176214u;
    {
        const bool branch_taken_0x176214 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x176218u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x176214) {
            ctx->pc = 0x176234u;
            goto label_176234;
        }
    }
    ctx->pc = 0x17621Cu;
    // 0x17621c: 0x10a20005
    ctx->pc = 0x17621Cu;
    {
        const bool branch_taken_0x17621c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x176220u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x17621c) {
            ctx->pc = 0x176234u;
            goto label_176234;
        }
    }
    ctx->pc = 0x176224u;
    // 0x176224: 0x10a20003
    ctx->pc = 0x176224u;
    {
        const bool branch_taken_0x176224 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x176228u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x176224) {
            ctx->pc = 0x176234u;
            goto label_176234;
        }
    }
    ctx->pc = 0x17622Cu;
    // 0x17622c: 0x14a2000b
    ctx->pc = 0x17622Cu;
    {
        const bool branch_taken_0x17622c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x176230u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x17622c) {
            ctx->pc = 0x17625Cu;
            goto label_17625c;
        }
    }
    ctx->pc = 0x176234u;
label_176234:
    // 0x176234: 0x26028770
    ctx->pc = 0x176234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294936432));
label_176238:
    // 0x176238: 0x24030009
    ctx->pc = 0x176238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x17623c: 0x3c04002c
    ctx->pc = 0x17623cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x176240: 0xdfbf0010
    ctx->pc = 0x176240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176244: 0xdfb00000
    ctx->pc = 0x176244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176248: 0x2484afc8
    ctx->pc = 0x176248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946760));
    // 0x17624c: 0xac430004
    ctx->pc = 0x17624cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x176250: 0xac450024
    ctx->pc = 0x176250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
    // 0x176254: 0x805114a
    ctx->pc = 0x176254u;
    ctx->pc = 0x176258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x144528u;
    printf_0x144528(rdram, ctx, runtime); return;
    ctx->pc = 0x17625Cu;
label_17625c:
    // 0x17625c: 0xdfb00000
    ctx->pc = 0x17625cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176260: 0x3e00008
    ctx->pc = 0x176260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176234u: goto label_176234;
            case 0x176238u: goto label_176238;
            case 0x17625Cu: goto label_17625c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176268u;
}
