#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdErrFunc
// Address: 0x18f388 - 0x18f4cc
void mwPlySfdErrFunc_0x18f388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdErrFunc");


    ctx->pc = 0x18f388u;

    // 0x18f388: 0x27bdffb0
    ctx->pc = 0x18f388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18f38c: 0xffb20020
    ctx->pc = 0x18f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18f390: 0xffb00000
    ctx->pc = 0x18f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f394: 0x902d
    ctx->pc = 0x18f394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f398: 0xffbf0040
    ctx->pc = 0x18f398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18f39c: 0xa0802d
    ctx->pc = 0x18f39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3a0: 0xffb30030
    ctx->pc = 0x18f3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18f3a4: 0x10800005
    ctx->pc = 0x18F3A4u;
    {
        const bool branch_taken_0x18f3a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F3A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x18f3a4) {
            ctx->pc = 0x18F3BCu;
            goto label_18f3bc;
        }
    }
    ctx->pc = 0x18F3ACu;
    // 0x18f3ac: 0xc063d42
    ctx->pc = 0x18F3ACu;
    SET_GPR_U32(ctx, 31, 0x18F3B4u);
    ctx->pc = 0x18F508u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetSfdHn_0x18f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3B4u; }
        else if (ctx->pc != 0x18F3B4u) { ctx->pc = 0x18F3B4u; }
    }
    if (ctx->pc != 0x18F3B4u) { return; }
    ctx->pc = 0x18F3B4u;
    // 0x18f3b4: 0x10000002
    ctx->pc = 0x18F3B4u;
    {
        const bool branch_taken_0x18f3b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F3B8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f3b4) {
            ctx->pc = 0x18F3C0u;
            goto label_18f3c0;
        }
    }
    ctx->pc = 0x18F3BCu;
label_18f3bc:
    // 0x18f3bc: 0x882d
    ctx->pc = 0x18f3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f3c0:
    // 0x18f3c0: 0x1200000b
    ctx->pc = 0x18F3C0u;
    {
        const bool branch_taken_0x18f3c0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F3C4u;
        SET_GPR_U32(ctx, 6, ((uint32_t)38 << 16));
        if (branch_taken_0x18f3c0) {
            ctx->pc = 0x18F3F0u;
            goto label_18f3f0;
        }
    }
    ctx->pc = 0x18F3C8u;
    // 0x18f3c8: 0x3c020026
    ctx->pc = 0x18f3c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x18f3cc: 0x8cc5dd30
    ctx->pc = 0x18f3ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294958384)));
    // 0x18f3d0: 0x2442dcf0
    ctx->pc = 0x18f3d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958320));
    // 0x18f3d4: 0x51880
    ctx->pc = 0x18f3d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x18f3d8: 0x28a4000f
    ctx->pc = 0x18f3d8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 15));
    // 0x18f3dc: 0x621821
    ctx->pc = 0x18f3dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f3e0: 0x10800003
    ctx->pc = 0x18F3E0u;
    {
        const bool branch_taken_0x18f3e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F3E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x18f3e0) {
            ctx->pc = 0x18F3F0u;
            goto label_18f3f0;
        }
    }
    ctx->pc = 0x18F3E8u;
    // 0x18f3e8: 0x24a20001
    ctx->pc = 0x18f3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x18f3ec: 0xacc2dd30
    ctx->pc = 0x18f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294958384), GPR_U32(ctx, 2));
label_18f3f0:
    // 0x18f3f0: 0x3c02ff00
    ctx->pc = 0x18f3f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x18f3f4: 0x34420f40
    ctx->pc = 0x18f3f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 3904));
    // 0x18f3f8: 0x12020013
    ctx->pc = 0x18F3F8u;
    {
        const bool branch_taken_0x18f3f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x18F3FCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x18f3f8) {
            ctx->pc = 0x18F448u;
            goto label_18f448;
        }
    }
    ctx->pc = 0x18F400u;
    // 0x18f400: 0x14400025
    ctx->pc = 0x18F400u;
    {
        const bool branch_taken_0x18f400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F404u;
        SET_GPR_U32(ctx, 19, ((uint32_t)38 << 16));
        if (branch_taken_0x18f400) {
            ctx->pc = 0x18F498u;
            goto label_18f498;
        }
    }
    ctx->pc = 0x18F408u;
    // 0x18f408: 0x3c02ffff
    ctx->pc = 0x18f408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x18f40c: 0x3442fffe
    ctx->pc = 0x18f40cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x18f410: 0x50102b
    ctx->pc = 0x18f410u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18f414: 0x14400021
    ctx->pc = 0x18F414u;
    {
        const bool branch_taken_0x18f414 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F418u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x18f414) {
            ctx->pc = 0x18F49Cu;
            goto label_18f49c;
        }
    }
    ctx->pc = 0x18F41Cu;
    // 0x18f41c: 0x2e02fffd
    ctx->pc = 0x18f41cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 65533));
    // 0x18f420: 0x1440001f
    ctx->pc = 0x18F420u;
    {
        const bool branch_taken_0x18f420 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F424u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955568));
        if (branch_taken_0x18f420) {
            ctx->pc = 0x18F4A0u;
            goto label_18f4a0;
        }
    }
    ctx->pc = 0x18F428u;
    // 0x18f428: 0x3c130026
    ctx->pc = 0x18f428u;
    SET_GPR_U32(ctx, 19, ((uint32_t)38 << 16));
    // 0x18f42c: 0x3c05002c
    ctx->pc = 0x18f42cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18f430: 0x24a5d200
    ctx->pc = 0x18f430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955520));
    // 0x18f434: 0x200302d
    ctx->pc = 0x18f434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f438: 0xc0513ca
    ctx->pc = 0x18F438u;
    SET_GPR_U32(ctx, 31, 0x18F440u);
    ctx->pc = 0x18F43Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294958392));
    ctx->pc = 0x144F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x144f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F440u; }
        else if (ctx->pc != 0x18F440u) { ctx->pc = 0x18F440u; }
    }
    if (ctx->pc != 0x18F440u) { return; }
    ctx->pc = 0x18F440u;
    // 0x18f440: 0x1000001b
    ctx->pc = 0x18F440u;
    {
        const bool branch_taken_0x18f440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F444u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294958392));
        if (branch_taken_0x18f440) {
            ctx->pc = 0x18F4B0u;
            goto label_18f4b0;
        }
    }
    ctx->pc = 0x18F448u;
label_18f448:
    // 0x18f448: 0x3c130026
    ctx->pc = 0x18f448u;
    SET_GPR_U32(ctx, 19, ((uint32_t)38 << 16));
    // 0x18f44c: 0x3c05002c
    ctx->pc = 0x18f44cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18f450: 0x2670dd38
    ctx->pc = 0x18f450u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294958392));
    // 0x18f454: 0x3c06ff00
    ctx->pc = 0x18f454u;
    SET_GPR_U32(ctx, 6, ((uint32_t)65280 << 16));
    // 0x18f458: 0x24a5d218
    ctx->pc = 0x18f458u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955544));
    // 0x18f45c: 0x200202d
    ctx->pc = 0x18f45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f460: 0xc0513ca
    ctx->pc = 0x18F460u;
    SET_GPR_U32(ctx, 31, 0x18F468u);
    ctx->pc = 0x18F464u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 3904));
    ctx->pc = 0x144F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x144f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F468u; }
        else if (ctx->pc != 0x18F468u) { ctx->pc = 0x18F468u; }
    }
    if (ctx->pc != 0x18F468u) { return; }
    ctx->pc = 0x18F468u;
    // 0x18f468: 0x12200004
    ctx->pc = 0x18F468u;
    {
        const bool branch_taken_0x18f468 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x18f468) {
            ctx->pc = 0x18F47Cu;
            goto label_18f47c;
        }
    }
    ctx->pc = 0x18F470u;
    // 0x18f470: 0xc066826
    ctx->pc = 0x18F470u;
    SET_GPR_U32(ctx, 31, 0x18F478u);
    ctx->pc = 0x18F474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A098u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetSceErrMessage_0x19a098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F478u; }
        else if (ctx->pc != 0x18F478u) { ctx->pc = 0x18F478u; }
    }
    if (ctx->pc != 0x18F478u) { return; }
    ctx->pc = 0x18F478u;
    // 0x18f478: 0x40902d
    ctx->pc = 0x18f478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f47c:
    // 0x18f47c: 0x1240000b
    ctx->pc = 0x18F47Cu;
    {
        const bool branch_taken_0x18f47c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f47c) {
            ctx->pc = 0x18F4ACu;
            goto label_18f4ac;
        }
    }
    ctx->pc = 0x18F484u;
    // 0x18f484: 0x240282d
    ctx->pc = 0x18f484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f488: 0xc0515a2
    ctx->pc = 0x18F488u;
    SET_GPR_U32(ctx, 31, 0x18F490u);
    ctx->pc = 0x18F48Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 105));
    ctx->pc = 0x145688u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x145688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F490u; }
        else if (ctx->pc != 0x18F490u) { ctx->pc = 0x18F490u; }
    }
    if (ctx->pc != 0x18F490u) { return; }
    ctx->pc = 0x18F490u;
    // 0x18f490: 0x10000007
    ctx->pc = 0x18F490u;
    {
        const bool branch_taken_0x18f490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F494u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294958392));
        if (branch_taken_0x18f490) {
            ctx->pc = 0x18F4B0u;
            goto label_18f4b0;
        }
    }
    ctx->pc = 0x18F498u;
label_18f498:
    // 0x18f498: 0x3c05002c
    ctx->pc = 0x18f498u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
label_18f49c:
    // 0x18f49c: 0x24a5d230
    ctx->pc = 0x18f49cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955568));
label_18f4a0:
    // 0x18f4a0: 0x200302d
    ctx->pc = 0x18f4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4a4: 0xc0513ca
    ctx->pc = 0x18F4A4u;
    SET_GPR_U32(ctx, 31, 0x18F4ACu);
    ctx->pc = 0x18F4A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294958392));
    ctx->pc = 0x144F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x144f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4ACu; }
        else if (ctx->pc != 0x18F4ACu) { ctx->pc = 0x18F4ACu; }
    }
    if (ctx->pc != 0x18F4ACu) { return; }
    ctx->pc = 0x18F4ACu;
label_18f4ac:
    // 0x18f4ac: 0x2664dd38
    ctx->pc = 0x18f4acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294958392));
label_18f4b0:
    // 0x18f4b0: 0xdfbf0040
    ctx->pc = 0x18f4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f4b4: 0xdfb30030
    ctx->pc = 0x18f4b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f4b8: 0xdfb20020
    ctx->pc = 0x18f4b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f4bc: 0xdfb10010
    ctx->pc = 0x18f4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f4c0: 0xdfb00000
    ctx->pc = 0x18f4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f4c4: 0x8063dda
    ctx->pc = 0x18F4C4u;
    ctx->pc = 0x18F4C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18F4CCu;
}
