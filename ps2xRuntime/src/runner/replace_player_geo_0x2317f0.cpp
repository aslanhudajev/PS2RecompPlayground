#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: replace_player_geo
// Address: 0x2317f0 - 0x231848
void replace_player_geo_0x2317f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2317f0u;

    // 0x2317f0: 0x27bdffe0
    ctx->pc = 0x2317f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2317f4: 0xffbf0010
    ctx->pc = 0x2317f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2317f8: 0xffb00000
    ctx->pc = 0x2317f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2317fc: 0x80802d
    ctx->pc = 0x2317fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231800: 0x24032b00
    ctx->pc = 0x231800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231804: 0x2031818
    ctx->pc = 0x231804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231808: 0x3c020032
    ctx->pc = 0x231808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23180c: 0x24421bc0
    ctx->pc = 0x23180cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x231810: 0x621821
    ctx->pc = 0x231810u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231814: 0x8c620080
    ctx->pc = 0x231814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x231818: 0x10400008
    ctx->pc = 0x231818u;
    {
        const bool branch_taken_0x231818 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23181Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x231818) {
            ctx->pc = 0x23183Cu;
            goto label_23183c;
        }
    }
    ctx->pc = 0x231820u;
    // 0x231820: 0xc08c588
    ctx->pc = 0x231820u;
    SET_GPR_U32(ctx, 31, 0x231828u);
    ctx->pc = 0x231620u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_player_geo_0x231620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231828u; }
    }
    if (ctx->pc != 0x231828u) { return; }
    ctx->pc = 0x231828u;
    // 0x231828: 0x200202d
    ctx->pc = 0x231828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23182c: 0xdfbf0010
    ctx->pc = 0x23182cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231830: 0xdfb00000
    ctx->pc = 0x231830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231834: 0x808c35e
    ctx->pc = 0x231834u;
    ctx->pc = 0x231838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x230D78u;
    load_player_geo_0x230d78(rdram, ctx, runtime); return;
    ctx->pc = 0x23183Cu;
label_23183c:
    // 0x23183c: 0xdfb00000
    ctx->pc = 0x23183cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231840: 0x3e00008
    ctx->pc = 0x231840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231844u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23183Cu: goto label_23183c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231848u;
}
