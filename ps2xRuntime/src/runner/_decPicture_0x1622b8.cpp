#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _decPicture
// Address: 0x1622b8 - 0x162398
void _decPicture_0x1622b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_decPicture");


    ctx->pc = 0x1622b8u;

    // 0x1622b8: 0x27bdffc0
    ctx->pc = 0x1622b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1622bc: 0x24020003
    ctx->pc = 0x1622bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1622c0: 0xffb10010
    ctx->pc = 0x1622c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1622c4: 0x3c110023
    ctx->pc = 0x1622c4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1622c8: 0xffb20020
    ctx->pc = 0x1622c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1622cc: 0x8e23a3ec
    ctx->pc = 0x1622ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294943724)));
    // 0x1622d0: 0x80902d
    ctx->pc = 0x1622d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622d4: 0xffbf0030
    ctx->pc = 0x1622d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1622d8: 0x14620009
    ctx->pc = 0x1622D8u;
    {
        const bool branch_taken_0x1622d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1622DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x1622d8) {
            ctx->pc = 0x162300u;
            goto label_162300;
        }
    }
    ctx->pc = 0x1622E0u;
    // 0x1622e0: 0x3c100023
    ctx->pc = 0x1622e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1622e4: 0x8e02a35c
    ctx->pc = 0x1622e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294943580)));
    // 0x1622e8: 0x10400006
    ctx->pc = 0x1622E8u;
    {
        const bool branch_taken_0x1622e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1622ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294943724)));
        if (branch_taken_0x1622e8) {
            ctx->pc = 0x162304u;
            goto label_162304;
        }
    }
    ctx->pc = 0x1622F0u;
    // 0x1622f0: 0x3c04002c
    ctx->pc = 0x1622f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1622f4: 0xc059112
    ctx->pc = 0x1622F4u;
    SET_GPR_U32(ctx, 31, 0x1622FCu);
    ctx->pc = 0x1622F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937824));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622FCu; }
        else if (ctx->pc != 0x1622FCu) { ctx->pc = 0x1622FCu; }
    }
    if (ctx->pc != 0x1622FCu) { return; }
    ctx->pc = 0x1622FCu;
    // 0x1622fc: 0xae00a35c
    ctx->pc = 0x1622fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943580), GPR_U32(ctx, 0));
label_162300:
    // 0x162300: 0x8e23a3ec
    ctx->pc = 0x162300u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294943724)));
label_162304:
    // 0x162304: 0x24020002
    ctx->pc = 0x162304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162308: 0x1062000f
    ctx->pc = 0x162308u;
    {
        const bool branch_taken_0x162308 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16230Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x162308) {
            ctx->pc = 0x162348u;
            goto label_162348;
        }
    }
    ctx->pc = 0x162310u;
    // 0x162310: 0x10400005
    ctx->pc = 0x162310u;
    {
        const bool branch_taken_0x162310 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162314u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x162310) {
            ctx->pc = 0x162328u;
            goto label_162328;
        }
    }
    ctx->pc = 0x162318u;
    // 0x162318: 0x10620008
    ctx->pc = 0x162318u;
    {
        const bool branch_taken_0x162318 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16231Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x162318) {
            ctx->pc = 0x16233Cu;
            goto label_16233c;
        }
    }
    ctx->pc = 0x162320u;
    // 0x162320: 0x1000000d
    ctx->pc = 0x162320u;
    {
        const bool branch_taken_0x162320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162324u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x162320) {
            ctx->pc = 0x162358u;
            goto label_162358;
        }
    }
    ctx->pc = 0x162328u;
label_162328:
    // 0x162328: 0x24020003
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16232c: 0x14620009
    ctx->pc = 0x16232Cu;
    {
        const bool branch_taken_0x16232c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x162330u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x16232c) {
            ctx->pc = 0x162354u;
            goto label_162354;
        }
    }
    ctx->pc = 0x162334u;
    // 0x162334: 0x1000000b
    ctx->pc = 0x162334u;
    {
        const bool branch_taken_0x162334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162338u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294943876)));
        if (branch_taken_0x162334) {
            ctx->pc = 0x162364u;
            goto label_162364;
        }
    }
    ctx->pc = 0x16233Cu;
label_16233c:
    // 0x16233c: 0x3c020023
    ctx->pc = 0x16233cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162340: 0x10000008
    ctx->pc = 0x162340u;
    {
        const bool branch_taken_0x162340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162344u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
        if (branch_taken_0x162340) {
            ctx->pc = 0x162364u;
            goto label_162364;
        }
    }
    ctx->pc = 0x162348u;
label_162348:
    // 0x162348: 0x3c020023
    ctx->pc = 0x162348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16234c: 0x10000005
    ctx->pc = 0x16234Cu;
    {
        const bool branch_taken_0x16234c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162350u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294943884)));
        if (branch_taken_0x16234c) {
            ctx->pc = 0x162364u;
            goto label_162364;
        }
    }
    ctx->pc = 0x162354u;
label_162354:
    // 0x162354: 0x3c04002c
    ctx->pc = 0x162354u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_162358:
    // 0x162358: 0x8c50a484
    ctx->pc = 0x162358u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294943876)));
    // 0x16235c: 0xc059112
    ctx->pc = 0x16235Cu;
    SET_GPR_U32(ctx, 31, 0x162364u);
    ctx->pc = 0x162360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162364u; }
        else if (ctx->pc != 0x162364u) { ctx->pc = 0x162364u; }
    }
    if (ctx->pc != 0x162364u) { return; }
    ctx->pc = 0x162364u;
label_162364:
    // 0x162364: 0xc05810c
    ctx->pc = 0x162364u;
    SET_GPR_U32(ctx, 31, 0x16236Cu);
    ctx->pc = 0x162368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pictureData0_0x160430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16236Cu; }
        else if (ctx->pc != 0x16236Cu) { ctx->pc = 0x16236Cu; }
    }
    if (ctx->pc != 0x16236Cu) { return; }
    ctx->pc = 0x16236Cu;
    // 0x16236c: 0x40182d
    ctx->pc = 0x16236cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162370: 0x10600002
    ctx->pc = 0x162370u;
    {
        const bool branch_taken_0x162370 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x162374u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x162370) {
            ctx->pc = 0x16237Cu;
            goto label_16237c;
        }
    }
    ctx->pc = 0x162378u;
    // 0x162378: 0xae020028
    ctx->pc = 0x162378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_16237c:
    // 0x16237c: 0xdfbf0030
    ctx->pc = 0x16237cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162380: 0x60102d
    ctx->pc = 0x162380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162384: 0xdfb20020
    ctx->pc = 0x162384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162388: 0xdfb10010
    ctx->pc = 0x162388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16238c: 0xdfb00000
    ctx->pc = 0x16238cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162390: 0x3e00008
    ctx->pc = 0x162390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162300u: goto label_162300;
            case 0x162304u: goto label_162304;
            case 0x162328u: goto label_162328;
            case 0x16233Cu: goto label_16233c;
            case 0x162348u: goto label_162348;
            case 0x162354u: goto label_162354;
            case 0x162358u: goto label_162358;
            case 0x162364u: goto label_162364;
            case 0x16237Cu: goto label_16237c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162398u;
}
