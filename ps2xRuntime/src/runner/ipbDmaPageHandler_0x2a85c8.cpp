#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbDmaPageHandler
// Address: 0x2a85c8 - 0x2a881c
void ipbDmaPageHandler_0x2a85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a85c8u;

    // 0x2a85c8: 0x27bdffb0
    ctx->pc = 0x2a85c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a85cc: 0xffbf0040
    ctx->pc = 0x2a85ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a85d0: 0xffbe0030
    ctx->pc = 0x2a85d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x2a85d4: 0xffb00020
    ctx->pc = 0x2a85d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a85d8: 0x3a0f02d
    ctx->pc = 0x2a85d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85dc: 0xafc40000
    ctx->pc = 0x2a85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a85e0: 0x3c100036
    ctx->pc = 0x2a85e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a85e4: 0x8e10dee0
    ctx->pc = 0x2a85e4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a85e8: 0x3c031001
    ctx->pc = 0x2a85e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4097 << 16));
    // 0x2a85ec: 0x8c63a000
    ctx->pc = 0x2a85ecu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x2a85f0: 0x31203
    ctx->pc = 0x2a85f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2a85f4: 0x38430001
    ctx->pc = 0x2a85f4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2a85f8: 0x30620001
    ctx->pc = 0x2a85f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a85fc: 0xafc20004
    ctx->pc = 0x2a85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a8600: 0x3c031001
    ctx->pc = 0x2a8600u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4097 << 16));
    // 0x2a8604: 0x8c639000
    ctx->pc = 0x2a8604u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294938624))); // MMIO: 0x10009000
    // 0x2a8608: 0x31203
    ctx->pc = 0x2a8608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2a860c: 0x38430001
    ctx->pc = 0x2a860cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2a8610: 0x30620001
    ctx->pc = 0x2a8610u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a8614: 0xafc20008
    ctx->pc = 0x2a8614u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2a8618: 0x3c021200
    ctx->pc = 0x2a8618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x2a861c: 0xdc421080
    ctx->pc = 0x2a861cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4224)));
    // 0x2a8620: 0x2183c
    ctx->pc = 0x2a8620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8624: 0x3183f
    ctx->pc = 0x2a8624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a8628: 0x3c010037
    ctx->pc = 0x2a8628u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a862c: 0xac2383ac
    ctx->pc = 0x2a862cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935468), GPR_U32(ctx, 3));
    // 0x2a8630: 0xc0aaca2
    ctx->pc = 0x2A8630u;
    SET_GPR_U32(ctx, 31, 0x2A8638u);
    ctx->pc = 0x2AB288u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbGetCompletedTexSeq_0x2ab288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8638u; }
    }
    if (ctx->pc != 0x2A8638u) { return; }
    ctx->pc = 0x2A8638u;
    // 0x2a8638: 0x2443ffff
    ctx->pc = 0x2a8638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a863c: 0xafc3000c
    ctx->pc = 0x2a863cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2a8640: 0xc0aacb2
    ctx->pc = 0x2A8640u;
    SET_GPR_U32(ctx, 31, 0x2A8648u);
    ctx->pc = 0x2AB2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbGetCompletedGeomSeq_0x2ab2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8648u; }
    }
    if (ctx->pc != 0x2A8648u) { return; }
    ctx->pc = 0x2A8648u;
    // 0x2a8648: 0x2443ffff
    ctx->pc = 0x2a8648u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a864c: 0xafc30010
    ctx->pc = 0x2a864cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 3));
    // 0x2a8650: 0x8fc2000c
    ctx->pc = 0x2a8650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a8654: 0x3c030037
    ctx->pc = 0x2a8654u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8658: 0x8c63294c
    ctx->pc = 0x2a8658u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10572)));
    // 0x2a865c: 0x62102a
    ctx->pc = 0x2a865cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a8660: 0x10400004
    ctx->pc = 0x2A8660u;
    {
        const bool branch_taken_0x2a8660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8660) {
            ctx->pc = 0x2A8674u;
            goto label_2a8674;
        }
    }
    ctx->pc = 0x2A8668u;
    // 0x2a8668: 0x8fc2000c
    ctx->pc = 0x2a8668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a866c: 0x3c010037
    ctx->pc = 0x2a866cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a8670: 0xac22294c
    ctx->pc = 0x2a8670u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10572), GPR_U32(ctx, 2));
label_2a8674:
    // 0x2a8674: 0x8fc20010
    ctx->pc = 0x2a8674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a8678: 0x3c030037
    ctx->pc = 0x2a8678u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a867c: 0x8c632954
    ctx->pc = 0x2a867cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10580)));
    // 0x2a8680: 0x62102a
    ctx->pc = 0x2a8680u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a8684: 0x10400004
    ctx->pc = 0x2A8684u;
    {
        const bool branch_taken_0x2a8684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8684) {
            ctx->pc = 0x2A8698u;
            goto label_2a8698;
        }
    }
    ctx->pc = 0x2A868Cu;
    // 0x2a868c: 0x8fc20010
    ctx->pc = 0x2a868cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a8690: 0x3c010037
    ctx->pc = 0x2a8690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a8694: 0xac222954
    ctx->pc = 0x2a8694u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10580), GPR_U32(ctx, 2));
label_2a8698:
    // 0x2a8698: 0x3c020037
    ctx->pc = 0x2a8698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a869c: 0x8c422948
    ctx->pc = 0x2a869cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10568)));
    // 0x2a86a0: 0x4410003
    ctx->pc = 0x2A86A0u;
    {
        const bool branch_taken_0x2a86a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a86a0) {
            ctx->pc = 0x2A86B0u;
            goto label_2a86b0;
        }
    }
    ctx->pc = 0x2A86A8u;
    // 0x2a86a8: 0x10000055
    ctx->pc = 0x2A86A8u;
    {
        const bool branch_taken_0x2a86a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a86a8) {
            ctx->pc = 0x2A8800u;
            goto label_2a8800;
        }
    }
    ctx->pc = 0x2A86B0u;
label_2a86b0:
    // 0x2a86b0: 0x3c020037
    ctx->pc = 0x2a86b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a86b4: 0x8c42293c
    ctx->pc = 0x2a86b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10556)));
    // 0x2a86b8: 0x24030001
    ctx->pc = 0x2a86b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a86bc: 0x14430013
    ctx->pc = 0x2A86BCu;
    {
        const bool branch_taken_0x2a86bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a86bc) {
            ctx->pc = 0x2A870Cu;
            goto label_2a870c;
        }
    }
    ctx->pc = 0x2A86C4u;
    // 0x2a86c4: 0x3c020037
    ctx->pc = 0x2a86c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a86c8: 0x8c422954
    ctx->pc = 0x2a86c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10580)));
    // 0x2a86cc: 0x3c030037
    ctx->pc = 0x2a86ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a86d0: 0x8c632948
    ctx->pc = 0x2a86d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10568)));
    // 0x2a86d4: 0x43102a
    ctx->pc = 0x2a86d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2a86d8: 0x1440000c
    ctx->pc = 0x2A86D8u;
    {
        const bool branch_taken_0x2a86d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a86d8) {
            ctx->pc = 0x2A870Cu;
            goto label_2a870c;
        }
    }
    ctx->pc = 0x2A86E0u;
    // 0x2a86e0: 0x8e020010
    ctx->pc = 0x2a86e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a86e4: 0x8c430004
    ctx->pc = 0x2a86e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a86e8: 0x30620001
    ctx->pc = 0x2a86e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a86ec: 0x24430001
    ctx->pc = 0x2a86ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a86f0: 0x3c010038
    ctx->pc = 0x2a86f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)56 << 16));
    // 0x2a86f4: 0xac23b17c
    ctx->pc = 0x2a86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947196), GPR_U32(ctx, 3));
    // 0x2a86f8: 0x24020002
    ctx->pc = 0x2a86f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a86fc: 0x3c010037
    ctx->pc = 0x2a86fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a8700: 0xac22293c
    ctx->pc = 0x2a8700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10556), GPR_U32(ctx, 2));
    // 0x2a8704: 0x1000003e
    ctx->pc = 0x2A8704u;
    {
        const bool branch_taken_0x2a8704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8704) {
            ctx->pc = 0x2A8800u;
            goto label_2a8800;
        }
    }
    ctx->pc = 0x2A870Cu;
label_2a870c:
    // 0x2a870c: 0x8fc20004
    ctx->pc = 0x2a870cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8710: 0x1040001d
    ctx->pc = 0x2A8710u;
    {
        const bool branch_taken_0x2a8710 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8710) {
            ctx->pc = 0x2A8788u;
            goto label_2a8788;
        }
    }
    ctx->pc = 0x2A8718u;
    // 0x2a8718: 0x3c020037
    ctx->pc = 0x2a8718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a871c: 0x8c422948
    ctx->pc = 0x2a871cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10568)));
    // 0x2a8720: 0x3c030037
    ctx->pc = 0x2a8720u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8724: 0x8c632950
    ctx->pc = 0x2a8724u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10576)));
    // 0x2a8728: 0x62102a
    ctx->pc = 0x2a8728u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a872c: 0x10400016
    ctx->pc = 0x2A872Cu;
    {
        const bool branch_taken_0x2a872c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a872c) {
            ctx->pc = 0x2A8788u;
            goto label_2a8788;
        }
    }
    ctx->pc = 0x2A8734u;
    // 0x2a8734: 0x3c020037
    ctx->pc = 0x2a8734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8738: 0x8c42294c
    ctx->pc = 0x2a8738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10572)));
    // 0x2a873c: 0x3c030037
    ctx->pc = 0x2a873cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8740: 0x8c632950
    ctx->pc = 0x2a8740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10576)));
    // 0x2a8744: 0x43102a
    ctx->pc = 0x2a8744u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2a8748: 0x1440000f
    ctx->pc = 0x2A8748u;
    {
        const bool branch_taken_0x2a8748 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8748) {
            ctx->pc = 0x2A8788u;
            goto label_2a8788;
        }
    }
    ctx->pc = 0x2A8750u;
    // 0x2a8750: 0x3c030037
    ctx->pc = 0x2a8750u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8754: 0x8c632950
    ctx->pc = 0x2a8754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10576)));
    // 0x2a8758: 0x2462ffff
    ctx->pc = 0x2a8758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a875c: 0x3c030037
    ctx->pc = 0x2a875cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8760: 0x8c632954
    ctx->pc = 0x2a8760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10580)));
    // 0x2a8764: 0x62102a
    ctx->pc = 0x2a8764u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a8768: 0x14400007
    ctx->pc = 0x2A8768u;
    {
        const bool branch_taken_0x2a8768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8768) {
            ctx->pc = 0x2A8788u;
            goto label_2a8788;
        }
    }
    ctx->pc = 0x2A8770u;
    // 0x2a8770: 0x3c030037
    ctx->pc = 0x2a8770u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8774: 0x8c632950
    ctx->pc = 0x2a8774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10576)));
    // 0x2a8778: 0x24620001
    ctx->pc = 0x2a8778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a877c: 0x40202d
    ctx->pc = 0x2a877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8780: 0xc0aa064
    ctx->pc = 0x2A8780u;
    SET_GPR_U32(ctx, 31, 0x2A8788u);
    ctx->pc = 0x2A8190u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbTexDmaSend_0x2a8190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8788u; }
    }
    if (ctx->pc != 0x2A8788u) { return; }
    ctx->pc = 0x2A8788u;
label_2a8788:
    // 0x2a8788: 0x8fc20008
    ctx->pc = 0x2a8788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a878c: 0x1040001c
    ctx->pc = 0x2A878Cu;
    {
        const bool branch_taken_0x2a878c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a878c) {
            ctx->pc = 0x2A8800u;
            goto label_2a8800;
        }
    }
    ctx->pc = 0x2A8794u;
    // 0x2a8794: 0x3c020037
    ctx->pc = 0x2a8794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8798: 0x8c422948
    ctx->pc = 0x2a8798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10568)));
    // 0x2a879c: 0x3c030037
    ctx->pc = 0x2a879cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a87a0: 0x8c632958
    ctx->pc = 0x2a87a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10584)));
    // 0x2a87a4: 0x62102a
    ctx->pc = 0x2a87a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a87a8: 0x10400015
    ctx->pc = 0x2A87A8u;
    {
        const bool branch_taken_0x2a87a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a87a8) {
            ctx->pc = 0x2A8800u;
            goto label_2a8800;
        }
    }
    ctx->pc = 0x2A87B0u;
    // 0x2a87b0: 0x3c020037
    ctx->pc = 0x2a87b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a87b4: 0x8c422954
    ctx->pc = 0x2a87b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10580)));
    // 0x2a87b8: 0x3c030037
    ctx->pc = 0x2a87b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a87bc: 0x8c632958
    ctx->pc = 0x2a87bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10584)));
    // 0x2a87c0: 0x43102a
    ctx->pc = 0x2a87c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2a87c4: 0x1440000e
    ctx->pc = 0x2A87C4u;
    {
        const bool branch_taken_0x2a87c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a87c4) {
            ctx->pc = 0x2A8800u;
            goto label_2a8800;
        }
    }
    ctx->pc = 0x2A87CCu;
    // 0x2a87cc: 0x3c020037
    ctx->pc = 0x2a87ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a87d0: 0x8c42294c
    ctx->pc = 0x2a87d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10572)));
    // 0x2a87d4: 0x3c030037
    ctx->pc = 0x2a87d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a87d8: 0x8c632958
    ctx->pc = 0x2a87d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10584)));
    // 0x2a87dc: 0x62102a
    ctx->pc = 0x2a87dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a87e0: 0x10400007
    ctx->pc = 0x2A87E0u;
    {
        const bool branch_taken_0x2a87e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a87e0) {
            ctx->pc = 0x2A8800u;
            goto label_2a8800;
        }
    }
    ctx->pc = 0x2A87E8u;
    // 0x2a87e8: 0x3c030037
    ctx->pc = 0x2a87e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a87ec: 0x8c632958
    ctx->pc = 0x2a87ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10584)));
    // 0x2a87f0: 0x24620001
    ctx->pc = 0x2a87f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a87f4: 0x40202d
    ctx->pc = 0x2a87f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87f8: 0xc0aa0ba
    ctx->pc = 0x2A87F8u;
    SET_GPR_U32(ctx, 31, 0x2A8800u);
    ctx->pc = 0x2A82E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbObjDmaSend_0x2a82e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8800u; }
    }
    if (ctx->pc != 0x2A8800u) { return; }
    ctx->pc = 0x2A8800u;
label_2a8800:
    // 0x2a8800: 0x3c0e82d
    ctx->pc = 0x2a8800u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8804: 0xdfbf0040
    ctx->pc = 0x2a8804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8808: 0xdfbe0030
    ctx->pc = 0x2a8808u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a880c: 0xdfb00020
    ctx->pc = 0x2a880cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8810: 0x27bd0050
    ctx->pc = 0x2a8810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8814: 0x3e00008
    ctx->pc = 0x2A8814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8674u: goto label_2a8674;
            case 0x2A8698u: goto label_2a8698;
            case 0x2A86B0u: goto label_2a86b0;
            case 0x2A870Cu: goto label_2a870c;
            case 0x2A8788u: goto label_2a8788;
            case 0x2A8800u: goto label_2a8800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A881Cu;
}
