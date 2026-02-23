#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ftoi
// Address: 0x1561e8 - 0x156278
void ftoi_0x1561e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ftoi");


    ctx->pc = 0x1561e8u;

    // 0x1561e8: 0x80282d
    ctx->pc = 0x1561e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561ec: 0x51078
    ctx->pc = 0x1561ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x1561f0: 0x2357e
    ctx->pc = 0x1561f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x1561f4: 0x64c6fbcd
    ctx->pc = 0x1561f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)4294966221);
    // 0x1561f8: 0x28c2ffcb
    ctx->pc = 0x1561f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294967243));
    // 0x1561fc: 0x10400003
    ctx->pc = 0x1561FCu;
    {
        const bool branch_taken_0x1561fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x156200u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 13));
        if (branch_taken_0x1561fc) {
            ctx->pc = 0x15620Cu;
            goto label_15620c;
        }
    }
    ctx->pc = 0x156204u;
    // 0x156204: 0x3e00008
    ctx->pc = 0x156204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15620Cu: goto label_15620c;
            case 0x15621Cu: goto label_15621c;
            case 0x156260u: goto label_156260;
            case 0x15626Cu: goto label_15626c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15620Cu;
label_15620c:
    // 0x15620c: 0x14400003
    ctx->pc = 0x15620Cu;
    {
        const bool branch_taken_0x15620c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x156210u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        if (branch_taken_0x15620c) {
            ctx->pc = 0x15621Cu;
            goto label_15621c;
        }
    }
    ctx->pc = 0x156214u;
    // 0x156214: 0x3e00008
    ctx->pc = 0x156214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156218u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15620Cu: goto label_15620c;
            case 0x15621Cu: goto label_15621c;
            case 0x156260u: goto label_156260;
            case 0x15626Cu: goto label_15626c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15621Cu;
label_15621c:
    // 0x15621c: 0x34038000
    ctx->pc = 0x15621cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x156220: 0x3197c
    ctx->pc = 0x156220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x156224: 0x22b3a
    ctx->pc = 0x156224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x156228: 0x4c1000d
    ctx->pc = 0x156228u;
    {
        const bool branch_taken_0x156228 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15622Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x156228) {
            ctx->pc = 0x156260u;
            goto label_156260;
        }
    }
    ctx->pc = 0x156230u;
    // 0x156230: 0x6302f
    ctx->pc = 0x156230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x156234: 0x24020003
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x156238: 0x64c3fffe
    ctx->pc = 0x156238u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)4294967294);
    // 0x15623c: 0x3183c
    ctx->pc = 0x15623cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x156240: 0x3183f
    ctx->pc = 0x156240u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x156244: 0x652816
    ctx->pc = 0x156244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x156248: 0x30a40003
    ctx->pc = 0x156248u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 3));
    // 0x15624c: 0x54820007
    ctx->pc = 0x15624Cu;
    {
        const bool branch_taken_0x15624c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x15624c) {
            ctx->pc = 0x156250u;
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->pc = 0x15626Cu;
            goto label_15626c;
        }
    }
    ctx->pc = 0x156254u;
    // 0x156254: 0x510ba
    ctx->pc = 0x156254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x156258: 0x10000004
    ctx->pc = 0x156258u;
    {
        const bool branch_taken_0x156258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15625Cu;
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
        if (branch_taken_0x156258) {
            ctx->pc = 0x15626Cu;
            goto label_15626c;
        }
    }
    ctx->pc = 0x156260u;
label_156260:
    // 0x156260: 0x6103c
    ctx->pc = 0x156260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x156264: 0x2103f
    ctx->pc = 0x156264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x156268: 0x452814
    ctx->pc = 0x156268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_15626c:
    // 0x15626c: 0x5103c
    ctx->pc = 0x15626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x156270: 0x3e00008
    ctx->pc = 0x156270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156274u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15620Cu: goto label_15620c;
            case 0x15621Cu: goto label_15621c;
            case 0x156260u: goto label_156260;
            case 0x15626Cu: goto label_15626c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156278u;
}
