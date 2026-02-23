#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_Create
// Address: 0x176eb0 - 0x177044
void DTX_Create_0x176eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_Create");


    ctx->pc = 0x176eb0u;

    // 0x176eb0: 0x27bdffb0
    ctx->pc = 0x176eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x176eb4: 0xffb20020
    ctx->pc = 0x176eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x176eb8: 0xa0902d
    ctx->pc = 0x176eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ebc: 0xffb30030
    ctx->pc = 0x176ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x176ec0: 0xffb10010
    ctx->pc = 0x176ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x176ec4: 0x80282d
    ctx->pc = 0x176ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ec8: 0xffbf0040
    ctx->pc = 0x176ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x176ecc: 0xc0982d
    ctx->pc = 0x176eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ed0: 0xffb00000
    ctx->pc = 0x176ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176ed4: 0x3242003f
    ctx->pc = 0x176ed4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 63));
    // 0x176ed8: 0x10400004
    ctx->pc = 0x176ED8u;
    {
        const bool branch_taken_0x176ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176EDCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176ed8) {
            ctx->pc = 0x176EECu;
            goto label_176eec;
        }
    }
    ctx->pc = 0x176EE0u;
    // 0x176ee0: 0x3c04002c
    ctx->pc = 0x176ee0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x176ee4: 0x10000025
    ctx->pc = 0x176EE4u;
    {
        const bool branch_taken_0x176ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176EE8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947248));
        if (branch_taken_0x176ee4) {
            ctx->pc = 0x176F7Cu;
            goto label_176f7c;
        }
    }
    ctx->pc = 0x176EECu;
label_176eec:
    // 0x176eec: 0x3262001f
    ctx->pc = 0x176eecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 31));
    // 0x176ef0: 0x10400003
    ctx->pc = 0x176EF0u;
    {
        const bool branch_taken_0x176ef0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176EF4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x176ef0) {
            ctx->pc = 0x176F00u;
            goto label_176f00;
        }
    }
    ctx->pc = 0x176EF8u;
    // 0x176ef8: 0x10000020
    ctx->pc = 0x176EF8u;
    {
        const bool branch_taken_0x176ef8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176EFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947280));
        if (branch_taken_0x176ef8) {
            ctx->pc = 0x176F7Cu;
            goto label_176f7c;
        }
    }
    ctx->pc = 0x176F00u;
label_176f00:
    // 0x176f00: 0x3222003f
    ctx->pc = 0x176f00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 63));
    // 0x176f04: 0x10400004
    ctx->pc = 0x176F04u;
    {
        const bool branch_taken_0x176f04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176F08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x176f04) {
            ctx->pc = 0x176F18u;
            goto label_176f18;
        }
    }
    ctx->pc = 0x176F0Cu;
    // 0x176f0c: 0x220282d
    ctx->pc = 0x176f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f10: 0x10000006
    ctx->pc = 0x176F10u;
    {
        const bool branch_taken_0x176f10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176F14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947312));
        if (branch_taken_0x176f10) {
            ctx->pc = 0x176F2Cu;
            goto label_176f2c;
        }
    }
    ctx->pc = 0x176F18u;
label_176f18:
    // 0x176f18: 0x2ca20008
    ctx->pc = 0x176f18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 8));
    // 0x176f1c: 0x14400007
    ctx->pc = 0x176F1Cu;
    {
        const bool branch_taken_0x176f1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176F20u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
        if (branch_taken_0x176f1c) {
            ctx->pc = 0x176F3Cu;
            goto label_176f3c;
        }
    }
    ctx->pc = 0x176F24u;
    // 0x176f24: 0x3c04002c
    ctx->pc = 0x176f24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x176f28: 0x2484b208
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947336));
label_176f2c:
    // 0x176f2c: 0xc05114a
    ctx->pc = 0x176F2Cu;
    SET_GPR_U32(ctx, 31, 0x176F34u);
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F34u; }
        else if (ctx->pc != 0x176F34u) { ctx->pc = 0x176F34u; }
    }
    if (ctx->pc != 0x176F34u) { return; }
    ctx->pc = 0x176F34u;
    // 0x176f34: 0x1000003c
    ctx->pc = 0x176F34u;
    {
        const bool branch_taken_0x176f34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176F38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176f34) {
            ctx->pc = 0x177028u;
            goto label_177028;
        }
    }
    ctx->pc = 0x176F3Cu;
label_176f3c:
    // 0x176f3c: 0x3c020024
    ctx->pc = 0x176f3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x176f40: 0xa31818
    ctx->pc = 0x176f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x176f44: 0x24428bb0
    ctx->pc = 0x176f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937520));
    // 0x176f48: 0x628021
    ctx->pc = 0x176f48u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176f4c: 0x82040000
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176f50: 0x14800035
    ctx->pc = 0x176F50u;
    {
        const bool branch_taken_0x176f50 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x176F54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176f50) {
            ctx->pc = 0x177028u;
            goto label_177028;
        }
    }
    ctx->pc = 0x176F58u;
    // 0x176f58: 0xa0202d
    ctx->pc = 0x176f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f5c: 0x260302d
    ctx->pc = 0x176f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f60: 0x240282d
    ctx->pc = 0x176f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f64: 0xc05db50
    ctx->pc = 0x176F64u;
    SET_GPR_U32(ctx, 31, 0x176F6Cu);
    ctx->pc = 0x176F68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        dtx_create_rmt_0x176d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F6Cu; }
        else if (ctx->pc != 0x176F6Cu) { ctx->pc = 0x176F6Cu; }
    }
    if (ctx->pc != 0x176F6Cu) { return; }
    ctx->pc = 0x176F6Cu;
    // 0x176f6c: 0x14400007
    ctx->pc = 0x176F6Cu;
    {
        const bool branch_taken_0x176f6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176F70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x176f6c) {
            ctx->pc = 0x176F8Cu;
            goto label_176f8c;
        }
    }
    ctx->pc = 0x176F74u;
    // 0x176f74: 0x3c04002c
    ctx->pc = 0x176f74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x176f78: 0x2484b220
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947360));
label_176f7c:
    // 0x176f7c: 0xc05114a
    ctx->pc = 0x176F7Cu;
    SET_GPR_U32(ctx, 31, 0x176F84u);
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F84u; }
        else if (ctx->pc != 0x176F84u) { ctx->pc = 0x176F84u; }
    }
    if (ctx->pc != 0x176F84u) { return; }
    ctx->pc = 0x176F84u;
    // 0x176f84: 0x10000028
    ctx->pc = 0x176F84u;
    {
        const bool branch_taken_0x176f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176F88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176f84) {
            ctx->pc = 0x177028u;
            goto label_177028;
        }
    }
    ctx->pc = 0x176F8Cu;
label_176f8c:
    // 0x176f8c: 0x2623ffc0
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x176f90: 0x3c042000
    ctx->pc = 0x176f90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)8192 << 16));
    // 0x176f94: 0x2431021
    ctx->pc = 0x176f94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x176f98: 0xae11001c
    ctx->pc = 0x176f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x176f9c: 0x441025
    ctx->pc = 0x176f9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x176fa0: 0xae130018
    ctx->pc = 0x176fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x176fa4: 0xae020014
    ctx->pc = 0x176fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x176fa8: 0x240202d
    ctx->pc = 0x176fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fac: 0x60302d
    ctx->pc = 0x176facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fb0: 0xae000008
    ctx->pc = 0x176fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x176fb4: 0xae030010
    ctx->pc = 0x176fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x176fb8: 0x282d
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fbc: 0xae12000c
    ctx->pc = 0x176fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x176fc0: 0xc050cfe
    ctx->pc = 0x176FC0u;
    SET_GPR_U32(ctx, 31, 0x176FC8u);
    ctx->pc = 0x176FC4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FC8u; }
        else if (ctx->pc != 0x176FC8u) { ctx->pc = 0x176FC8u; }
    }
    if (ctx->pc != 0x176FC8u) { return; }
    ctx->pc = 0x176FC8u;
    // 0x176fc8: 0x8e05000c
    ctx->pc = 0x176fc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176fcc: 0x8e020010
    ctx->pc = 0x176fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x176fd0: 0xa0202d
    ctx->pc = 0x176fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fd4: 0xa22821
    ctx->pc = 0x176fd4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x176fd8: 0xc05544c
    ctx->pc = 0x176FD8u;
    SET_GPR_U32(ctx, 31, 0x176FE0u);
    ctx->pc = 0x176FDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x155130u;
    {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x155130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FE0u; }
        else if (ctx->pc != 0x176FE0u) { ctx->pc = 0x176FE0u; }
    }
    if (ctx->pc != 0x176FE0u) { return; }
    ctx->pc = 0x176FE0u;
    // 0x176fe0: 0x8e05000c
    ctx->pc = 0x176fe0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176fe4: 0x8e020010
    ctx->pc = 0x176fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x176fe8: 0xa0202d
    ctx->pc = 0x176fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fec: 0xa22821
    ctx->pc = 0x176fecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x176ff0: 0xc05549c
    ctx->pc = 0x176FF0u;
    SET_GPR_U32(ctx, 31, 0x176FF8u);
    ctx->pc = 0x176FF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x155270u;
    {
        const uint32_t __entryPc = ctx->pc;
        InvalidDCache_0x155270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FF8u; }
        else if (ctx->pc != 0x176FF8u) { ctx->pc = 0x176FF8u; }
    }
    if (ctx->pc != 0x176FF8u) { return; }
    ctx->pc = 0x176FF8u;
    // 0x176ff8: 0x3c020017
    ctx->pc = 0x176ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x176ffc: 0x3c030017
    ctx->pc = 0x176ffcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x177000: 0x24426df8
    ctx->pc = 0x177000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28152));
    // 0x177004: 0x24040001
    ctx->pc = 0x177004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177008: 0x24636e08
    ctx->pc = 0x177008u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28168));
    // 0x17700c: 0xae020020
    ctx->pc = 0x17700cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x177010: 0xae030028
    ctx->pc = 0x177010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x177014: 0x200102d
    ctx->pc = 0x177014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177018: 0xa2040000
    ctx->pc = 0x177018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17701c: 0xae000024
    ctx->pc = 0x17701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x177020: 0xae00002c
    ctx->pc = 0x177020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x177024: 0xa2040002
    ctx->pc = 0x177024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
label_177028:
    // 0x177028: 0xdfbf0040
    ctx->pc = 0x177028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17702c: 0xdfb30030
    ctx->pc = 0x17702cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177030: 0xdfb20020
    ctx->pc = 0x177030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177034: 0xdfb10010
    ctx->pc = 0x177034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177038: 0xdfb00000
    ctx->pc = 0x177038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17703c: 0x3e00008
    ctx->pc = 0x17703Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177040u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176EECu: goto label_176eec;
            case 0x176F00u: goto label_176f00;
            case 0x176F18u: goto label_176f18;
            case 0x176F2Cu: goto label_176f2c;
            case 0x176F3Cu: goto label_176f3c;
            case 0x176F7Cu: goto label_176f7c;
            case 0x176F8Cu: goto label_176f8c;
            case 0x177028u: goto label_177028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177044u;
}
