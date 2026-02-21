#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadWeapons
// Address: 0x24f950 - 0x24f99c
void LoadWeapons_0x24f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f950u;

    // 0x24f950: 0x27bdffe0
    ctx->pc = 0x24f950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f954: 0xffbf0010
    ctx->pc = 0x24f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24f958: 0xffb00000
    ctx->pc = 0x24f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f95c: 0x3c100033
    ctx->pc = 0x24f95cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x24f960: 0x8e024970
    ctx->pc = 0x24f960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 18800)));
    // 0x24f964: 0x441000a
    ctx->pc = 0x24F964u;
    {
        const bool branch_taken_0x24f964 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24F968u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x24f964) {
            ctx->pc = 0x24F990u;
            goto label_24f990;
        }
    }
    ctx->pc = 0x24F96Cu;
    // 0x24f96c: 0x3c04003b
    ctx->pc = 0x24f96cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24f970: 0x24848498
    ctx->pc = 0x24f970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935704));
    // 0x24f974: 0x3c050034
    ctx->pc = 0x24f974u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x24f978: 0x24a5cda8
    ctx->pc = 0x24f978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954408));
    // 0x24f97c: 0x302d
    ctx->pc = 0x24f97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f980: 0xc080d22
    ctx->pc = 0x24F980u;
    SET_GPR_U32(ctx, 31, 0x24F988u);
    ctx->pc = 0x24F984u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F988u; }
    }
    if (ctx->pc != 0x24F988u) { return; }
    ctx->pc = 0x24F988u;
    // 0x24f988: 0xae024970
    ctx->pc = 0x24f988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18800), GPR_U32(ctx, 2));
    // 0x24f98c: 0xdfbf0010
    ctx->pc = 0x24f98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24f990:
    // 0x24f990: 0xdfb00000
    ctx->pc = 0x24f990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f994: 0x3e00008
    ctx->pc = 0x24F994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F990u: goto label_24f990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24F99Cu;
}
