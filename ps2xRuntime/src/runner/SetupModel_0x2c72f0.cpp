#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupModel
// Address: 0x2c72f0 - 0x2c7544
void SetupModel_0x2c72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c72f0u;

    // 0x2c72f0: 0x27bdffb0
    ctx->pc = 0x2c72f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c72f4: 0xffbf0040
    ctx->pc = 0x2c72f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c72f8: 0xffb30030
    ctx->pc = 0x2c72f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c72fc: 0xffb20020
    ctx->pc = 0x2c72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c7300: 0xffb10010
    ctx->pc = 0x2c7300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7304: 0xffb00000
    ctx->pc = 0x2c7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7308: 0x80882d
    ctx->pc = 0x2c7308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c730c: 0x3c020036
    ctx->pc = 0x2c730cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c7310: 0x8c52dee0
    ctx->pc = 0x2c7310u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c7314: 0x111100
    ctx->pc = 0x2c7314u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2c7318: 0x8e430038
    ctx->pc = 0x2c7318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c731c: 0x431021
    ctx->pc = 0x2c731cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7320: 0x8c500004
    ctx->pc = 0x2c7320u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c7324: 0x8e070040
    ctx->pc = 0x2c7324u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2c7328: 0x3c02f00b
    ctx->pc = 0x2c7328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61451 << 16));
    // 0x2c732c: 0x3442000d
    ctx->pc = 0x2c732cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
    // 0x2c7330: 0x10e20008
    ctx->pc = 0x2C7330u;
    {
        const bool branch_taken_0x2c7330 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C7334u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7330) {
            ctx->pc = 0x2C7354u;
            goto label_2c7354;
        }
    }
    ctx->pc = 0x2C7338u;
    // 0x2c7338: 0x3c04003b
    ctx->pc = 0x2c7338u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c733c: 0x248470e0
    ctx->pc = 0x2c733cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28896));
    // 0x2c7340: 0x220282d
    ctx->pc = 0x2c7340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7344: 0x26060020
    ctx->pc = 0x2c7344u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c7348: 0x3c08f00b
    ctx->pc = 0x2c7348u;
    SET_GPR_U32(ctx, 8, ((uint32_t)61451 << 16));
    // 0x2c734c: 0xc0b492e
    ctx->pc = 0x2C734Cu;
    SET_GPR_U32(ctx, 31, 0x2C7354u);
    ctx->pc = 0x2C7350u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 13));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7354u; }
    }
    if (ctx->pc != 0x2C7354u) { return; }
    ctx->pc = 0x2C7354u;
label_2c7354:
    // 0x2c7354: 0x26040020
    ctx->pc = 0x2c7354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c7358: 0x260282d
    ctx->pc = 0x2c7358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c735c: 0xc0bf42e
    ctx->pc = 0x2C735Cu;
    SET_GPR_U32(ctx, 31, 0x2C7364u);
    ctx->pc = 0x2C7360u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7364u; }
    }
    if (ctx->pc != 0x2C7364u) { return; }
    ctx->pc = 0x2C7364u;
    // 0x2c7364: 0xa200003f
    ctx->pc = 0x2c7364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7368: 0x8e020054
    ctx->pc = 0x2c7368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2c736c: 0x2021021
    ctx->pc = 0x2c736cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c7370: 0xae020054
    ctx->pc = 0x2c7370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2c7374: 0x8e020058
    ctx->pc = 0x2c7374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c7378: 0x2021021
    ctx->pc = 0x2c7378u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c737c: 0xae020058
    ctx->pc = 0x2c737cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2c7380: 0x8e02005c
    ctx->pc = 0x2c7380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2c7384: 0x2021021
    ctx->pc = 0x2c7384u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c7388: 0xae02005c
    ctx->pc = 0x2c7388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2c738c: 0x8e020060
    ctx->pc = 0x2c738cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c7390: 0x2023821
    ctx->pc = 0x2c7390u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c7394: 0xae070060
    ctx->pc = 0x2c7394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x2c7398: 0x8e020064
    ctx->pc = 0x2c7398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c739c: 0x2021021
    ctx->pc = 0x2c739cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c73a0: 0xae020064
    ctx->pc = 0x2c73a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c73a4: 0x8e020068
    ctx->pc = 0x2c73a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c73a8: 0x2021021
    ctx->pc = 0x2c73a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c73ac: 0xae020068
    ctx->pc = 0x2c73acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2c73b0: 0x8e020078
    ctx->pc = 0x2c73b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2c73b4: 0x2021021
    ctx->pc = 0x2c73b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c73b8: 0xae020078
    ctx->pc = 0x2c73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2c73bc: 0x8e02006c
    ctx->pc = 0x2c73bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c73c0: 0x2021021
    ctx->pc = 0x2c73c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c73c4: 0xae02006c
    ctx->pc = 0x2c73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x2c73c8: 0x8e420038
    ctx->pc = 0x2c73c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c73cc: 0x112100
    ctx->pc = 0x2c73ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2c73d0: 0x441021
    ctx->pc = 0x2c73d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c73d4: 0x8c420008
    ctx->pc = 0x2c73d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c73d8: 0x2021021
    ctx->pc = 0x2c73d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c73dc: 0xae020070
    ctx->pc = 0x2c73dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2c73e0: 0x8e430038
    ctx->pc = 0x2c73e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c73e4: 0x641021
    ctx->pc = 0x2c73e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c73e8: 0x8c420008
    ctx->pc = 0x2c73e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c73ec: 0x2021021
    ctx->pc = 0x2c73ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c73f0: 0x641821
    ctx->pc = 0x2c73f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c73f4: 0x8c63000c
    ctx->pc = 0x2c73f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c73f8: 0x431021
    ctx->pc = 0x2c73f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c73fc: 0xae020074
    ctx->pc = 0x2c73fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2c7400: 0x8e020050
    ctx->pc = 0x2c7400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2c7404: 0x2445ffff
    ctx->pc = 0x2c7404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c7408: 0x4a00015
    ctx->pc = 0x2C7408u;
    {
        const bool branch_taken_0x2c7408 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2C740Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7408) {
            ctx->pc = 0x2C7460u;
            goto label_2c7460;
        }
    }
    ctx->pc = 0x2C7410u;
    // 0x2c7410: 0x24020024
    ctx->pc = 0x2c7410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c7414: 0xa21818
    ctx->pc = 0x2c7414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c7418: 0x671021
    ctx->pc = 0x2c7418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c741c: 0x80420000
    ctx->pc = 0x2c741cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7420: 0x54400010
    ctx->pc = 0x2C7420u;
    {
        const bool branch_taken_0x2c7420 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c7420) {
            ctx->pc = 0x2C7424u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x2C7464u;
            goto label_2c7464;
        }
    }
    ctx->pc = 0x2C7428u;
    // 0x2c7428: 0xae050050
    ctx->pc = 0x2c7428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x2c742c: 0x24040024
    ctx->pc = 0x2c742cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
label_2c7430:
    // 0x2c7430: 0x24a5ffff
    ctx->pc = 0x2c7430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2c7434: 0x4a0000a
    ctx->pc = 0x2C7434u;
    {
        const bool branch_taken_0x2c7434 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2C7438u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c7434) {
            ctx->pc = 0x2C7460u;
            goto label_2c7460;
        }
    }
    ctx->pc = 0x2C743Cu;
    // 0x2c743c: 0x8e020060
    ctx->pc = 0x2c743cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c7440: 0x621821
    ctx->pc = 0x2c7440u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7444: 0x80620000
    ctx->pc = 0x2c7444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7448: 0x54400006
    ctx->pc = 0x2C7448u;
    {
        const bool branch_taken_0x2c7448 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c7448) {
            ctx->pc = 0x2C744Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x2C7464u;
            goto label_2c7464;
        }
    }
    ctx->pc = 0x2C7450u;
    // 0x2c7450: 0x8e020050
    ctx->pc = 0x2c7450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2c7454: 0x2442ffff
    ctx->pc = 0x2c7454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c7458: 0x1000fff5
    ctx->pc = 0x2C7458u;
    {
        const bool branch_taken_0x2c7458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C745Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        if (branch_taken_0x2c7458) {
            ctx->pc = 0x2C7430u;
            goto label_2c7430;
        }
    }
    ctx->pc = 0x2C7460u;
label_2c7460:
    // 0x2c7460: 0x8e020044
    ctx->pc = 0x2c7460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2c7464:
    // 0x2c7464: 0x1040001e
    ctx->pc = 0x2C7464u;
    {
        const bool branch_taken_0x2c7464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7468u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7464) {
            ctx->pc = 0x2C74E0u;
            goto label_2c74e0;
        }
    }
    ctx->pc = 0x2C746Cu;
    // 0x2c746c: 0x51980
    ctx->pc = 0x2c746cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
label_2c7470:
    // 0x2c7470: 0x8e020054
    ctx->pc = 0x2c7470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2c7474: 0x621821
    ctx->pc = 0x2c7474u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7478: 0xac60002c
    ctx->pc = 0x2c7478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x2c747c: 0x8c64000c
    ctx->pc = 0x2c747cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c7480: 0x58800012
    ctx->pc = 0x2C7480u;
    {
        const bool branch_taken_0x2c7480 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2c7480) {
            ctx->pc = 0x2C7484u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x2C74CCu;
            goto label_2c74cc;
        }
    }
    ctx->pc = 0x2C7488u;
    // 0x2c7488: 0x94620010
    ctx->pc = 0x2c7488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c748c: 0x5040000f
    ctx->pc = 0x2C748Cu;
    {
        const bool branch_taken_0x2c748c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c748c) {
            ctx->pc = 0x2C7490u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x2C74CCu;
            goto label_2c74cc;
        }
    }
    ctx->pc = 0x2C7494u;
    // 0x2c7494: 0x8c62001c
    ctx->pc = 0x2c7494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c7498: 0x10400005
    ctx->pc = 0x2C7498u;
    {
        const bool branch_taken_0x2c7498 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C749Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x2c7498) {
            ctx->pc = 0x2C74B0u;
            goto label_2c74b0;
        }
    }
    ctx->pc = 0x2C74A0u;
    // 0x2c74a0: 0x14400005
    ctx->pc = 0x2C74A0u;
    {
        const bool branch_taken_0x2c74a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C74A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
        if (branch_taken_0x2c74a0) {
            ctx->pc = 0x2C74B8u;
            goto label_2c74b8;
        }
    }
    ctx->pc = 0x2C74A8u;
    // 0x2c74a8: 0x14400004
    ctx->pc = 0x2C74A8u;
    {
        const bool branch_taken_0x2c74a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C74ACu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x2c74a8) {
            ctx->pc = 0x2C74BCu;
            goto label_2c74bc;
        }
    }
    ctx->pc = 0x2C74B0u;
label_2c74b0:
    // 0x2c74b0: 0x10000006
    ctx->pc = 0x2C74B0u;
    {
        const bool branch_taken_0x2c74b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C74B4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x2c74b0) {
            ctx->pc = 0x2C74CCu;
            goto label_2c74cc;
        }
    }
    ctx->pc = 0x2C74B8u;
label_2c74b8:
    // 0x2c74b8: 0xc21021
    ctx->pc = 0x2c74b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2c74bc:
    // 0x2c74bc: 0xac620018
    ctx->pc = 0x2c74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2c74c0: 0x8c62001c
    ctx->pc = 0x2c74c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c74c4: 0xc21021
    ctx->pc = 0x2c74c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c74c8: 0xac62001c
    ctx->pc = 0x2c74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2c74cc:
    // 0x2c74cc: 0x24a50001
    ctx->pc = 0x2c74ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c74d0: 0x8e020044
    ctx->pc = 0x2c74d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2c74d4: 0xa2102b
    ctx->pc = 0x2c74d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c74d8: 0x5440ffe5
    ctx->pc = 0x2C74D8u;
    {
        const bool branch_taken_0x2c74d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c74d8) {
            ctx->pc = 0x2C74DCu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
            ctx->pc = 0x2C7470u;
            goto label_2c7470;
        }
    }
    ctx->pc = 0x2C74E0u;
label_2c74e0:
    // 0x2c74e0: 0x8e02004c
    ctx->pc = 0x2c74e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2c74e4: 0x10400010
    ctx->pc = 0x2C74E4u;
    {
        const bool branch_taken_0x2c74e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C74E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c74e4) {
            ctx->pc = 0x2C7528u;
            goto label_2c7528;
        }
    }
    ctx->pc = 0x2C74ECu;
    // 0x2c74ec: 0x24060018
    ctx->pc = 0x2c74ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c74f0: 0x8e02005c
    ctx->pc = 0x2c74f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2c74f4: 0x0
    ctx->pc = 0x2c74f4u;
    // NOP
label_2c74f8:
    // 0x2c74f8: 0xa61818
    ctx->pc = 0x2c74f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c74fc: 0x621821
    ctx->pc = 0x2c74fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7500: 0x84620014
    ctx->pc = 0x2c7500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c7504: 0x8e040054
    ctx->pc = 0x2c7504u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2c7508: 0x21180
    ctx->pc = 0x2c7508u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2c750c: 0x441021
    ctx->pc = 0x2c750cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c7510: 0xac43002c
    ctx->pc = 0x2c7510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x2c7514: 0x24a50001
    ctx->pc = 0x2c7514u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c7518: 0x8e02004c
    ctx->pc = 0x2c7518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2c751c: 0xa2102b
    ctx->pc = 0x2c751cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c7520: 0x5440fff5
    ctx->pc = 0x2C7520u;
    {
        const bool branch_taken_0x2c7520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c7520) {
            ctx->pc = 0x2C7524u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->pc = 0x2C74F8u;
            goto label_2c74f8;
        }
    }
    ctx->pc = 0x2C7528u;
label_2c7528:
    // 0x2c7528: 0xdfbf0040
    ctx->pc = 0x2c7528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c752c: 0xdfb30030
    ctx->pc = 0x2c752cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7530: 0xdfb20020
    ctx->pc = 0x2c7530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7534: 0xdfb10010
    ctx->pc = 0x2c7534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7538: 0xdfb00000
    ctx->pc = 0x2c7538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c753c: 0x3e00008
    ctx->pc = 0x2C753Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7540u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7354u: goto label_2c7354;
            case 0x2C7430u: goto label_2c7430;
            case 0x2C7460u: goto label_2c7460;
            case 0x2C7464u: goto label_2c7464;
            case 0x2C7470u: goto label_2c7470;
            case 0x2C74B0u: goto label_2c74b0;
            case 0x2C74B8u: goto label_2c74b8;
            case 0x2C74BCu: goto label_2c74bc;
            case 0x2C74CCu: goto label_2c74cc;
            case 0x2C74E0u: goto label_2c74e0;
            case 0x2C74F8u: goto label_2c74f8;
            case 0x2C7528u: goto label_2c7528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7544u;
}
