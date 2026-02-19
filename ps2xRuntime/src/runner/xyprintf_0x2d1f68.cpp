#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: xyprintf
// Address: 0x2d1f68 - 0x2d2084
void xyprintf_0x2d1f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1f68u;

    // 0x2d1f68: 0x27bdff00
    ctx->pc = 0x2d1f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d1f6c: 0xffbf0080
    ctx->pc = 0x2d1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d1f70: 0xffb20070
    ctx->pc = 0x2d1f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d1f74: 0xffb10060
    ctx->pc = 0x2d1f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2d1f78: 0xffb00050
    ctx->pc = 0x2d1f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d1f7c: 0x80902d
    ctx->pc = 0x2d1f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f80: 0xa0882d
    ctx->pc = 0x2d1f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f84: 0xffa700d8
    ctx->pc = 0x2d1f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x2d1f88: 0xffa800e0
    ctx->pc = 0x2d1f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 8));
    // 0x2d1f8c: 0xffa900e8
    ctx->pc = 0x2d1f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
    // 0x2d1f90: 0xffaa00f0
    ctx->pc = 0x2d1f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
    // 0x2d1f94: 0xffab00f8
    ctx->pc = 0x2d1f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
    // 0x2d1f98: 0x3c02003a
    ctx->pc = 0x2d1f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1f9c: 0x8c421bdc
    ctx->pc = 0x2d1f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7132)));
    // 0x2d1fa0: 0x10400032
    ctx->pc = 0x2D1FA0u;
    {
        const bool branch_taken_0x2d1fa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1FA4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d1fa0) {
            ctx->pc = 0x2D206Cu;
            goto label_2d206c;
        }
    }
    ctx->pc = 0x2D1FA8u;
    // 0x2d1fa8: 0x3c02003a
    ctx->pc = 0x2d1fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1fac: 0x8c421bd8
    ctx->pc = 0x2d1facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7128)));
    // 0x2d1fb0: 0x10400028
    ctx->pc = 0x2D1FB0u;
    {
        const bool branch_taken_0x2d1fb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1FB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2d1fb0) {
            ctx->pc = 0x2D2054u;
            goto label_2d2054;
        }
    }
    ctx->pc = 0x2D1FB8u;
    // 0x2d1fb8: 0x16220002
    ctx->pc = 0x2D1FB8u;
    {
        const bool branch_taken_0x2d1fb8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D1FBCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d1fb8) {
            ctx->pc = 0x2D1FC4u;
            goto label_2d1fc4;
        }
    }
    ctx->pc = 0x2D1FC0u;
    // 0x2d1fc0: 0x8c712250
    ctx->pc = 0x2d1fc0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 8784)));
label_2d1fc4:
    // 0x2d1fc4: 0x26220001
    ctx->pc = 0x2d1fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d1fc8: 0xac622250
    ctx->pc = 0x2d1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8784), GPR_U32(ctx, 2));
    // 0x2d1fcc: 0x3a0202d
    ctx->pc = 0x2d1fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fd0: 0xc0b5d5e
    ctx->pc = 0x2D1FD0u;
    SET_GPR_U32(ctx, 31, 0x2D1FD8u);
    ctx->pc = 0x2D1FD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 216));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1FD8u; }
    }
    if (ctx->pc != 0x2D1FD8u) { return; }
    ctx->pc = 0x2D1FD8u;
    // 0x2d1fd8: 0x3c02003d
    ctx->pc = 0x2d1fd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d1fdc: 0xc0b144c
    ctx->pc = 0x2D1FDCu;
    SET_GPR_U32(ctx, 31, 0x2D1FE4u);
    ctx->pc = 0x2D1FE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8780)));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1FE4u; }
    }
    if (ctx->pc != 0x2D1FE4u) { return; }
    ctx->pc = 0x2D1FE4u;
    // 0x2d1fe4: 0x40802d
    ctx->pc = 0x2d1fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fe8: 0x1220c0
    ctx->pc = 0x2d1fe8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2d1fec: 0x1128c0
    ctx->pc = 0x2d1fecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d1ff0: 0xc0b13be
    ctx->pc = 0x2D1FF0u;
    SET_GPR_U32(ctx, 31, 0x2D1FF8u);
    ctx->pc = 0x2D1FF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSysText_0x2c4ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1FF8u; }
    }
    if (ctx->pc != 0x2D1FF8u) { return; }
    ctx->pc = 0x2D1FF8u;
    // 0x2d1ff8: 0x40882d
    ctx->pc = 0x2d1ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ffc: 0xc0b144c
    ctx->pc = 0x2D1FFCu;
    SET_GPR_U32(ctx, 31, 0x2D2004u);
    ctx->pc = 0x2D2000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2004u; }
    }
    if (ctx->pc != 0x2D2004u) { return; }
    ctx->pc = 0x2D2004u;
    // 0x2d2004: 0x1220000f
    ctx->pc = 0x2D2004u;
    {
        const bool branch_taken_0x2d2004 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2008u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d2004) {
            ctx->pc = 0x2D2044u;
            goto label_2d2044;
        }
    }
    ctx->pc = 0x2D200Cu;
    // 0x2d200c: 0x8c421be4
    ctx->pc = 0x2d200cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7140)));
    // 0x2d2010: 0x10400004
    ctx->pc = 0x2D2010u;
    {
        const bool branch_taken_0x2d2010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2014u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
        if (branch_taken_0x2d2010) {
            ctx->pc = 0x2D2024u;
            goto label_2d2024;
        }
    }
    ctx->pc = 0x2D2018u;
    // 0x2d2018: 0x8e220000
    ctx->pc = 0x2d2018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d201c: 0x431025
    ctx->pc = 0x2d201cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2020: 0xae220000
    ctx->pc = 0x2d2020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2024:
    // 0x2d2024: 0x12200007
    ctx->pc = 0x2D2024u;
    {
        const bool branch_taken_0x2d2024 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2028u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d2024) {
            ctx->pc = 0x2D2044u;
            goto label_2d2044;
        }
    }
    ctx->pc = 0x2D202Cu;
    // 0x2d202c: 0x8c421be8
    ctx->pc = 0x2d202cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7144)));
    // 0x2d2030: 0x10400005
    ctx->pc = 0x2D2030u;
    {
        const bool branch_taken_0x2d2030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2034u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d2030) {
            ctx->pc = 0x2D2048u;
            goto label_2d2048;
        }
    }
    ctx->pc = 0x2D2038u;
    // 0x2d2038: 0x8e220000
    ctx->pc = 0x2d2038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d203c: 0x34420008
    ctx->pc = 0x2d203cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2d2040: 0xae220000
    ctx->pc = 0x2d2040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2044:
    // 0x2d2044: 0x3c03003d
    ctx->pc = 0x2d2044u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
label_2d2048:
    // 0x2d2048: 0x24020001
    ctx->pc = 0x2d2048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d204c: 0x10000007
    ctx->pc = 0x2D204Cu;
    {
        const bool branch_taken_0x2d204c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2050u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8788), GPR_U32(ctx, 2));
        if (branch_taken_0x2d204c) {
            ctx->pc = 0x2D206Cu;
            goto label_2d206c;
        }
    }
    ctx->pc = 0x2D2054u;
label_2d2054:
    // 0x2d2054: 0x3c02003d
    ctx->pc = 0x2d2054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2058: 0x8c422254
    ctx->pc = 0x2d2058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8788)));
    // 0x2d205c: 0x10400004
    ctx->pc = 0x2D205Cu;
    {
        const bool branch_taken_0x2d205c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2060u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2d205c) {
            ctx->pc = 0x2D2070u;
            goto label_2d2070;
        }
    }
    ctx->pc = 0x2D2064u;
    // 0x2d2064: 0xc0b46de
    ctx->pc = 0x2D2064u;
    SET_GPR_U32(ctx, 31, 0x2D206Cu);
    ctx->pc = 0x2D1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_clear_0x2d1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D206Cu; }
    }
    if (ctx->pc != 0x2D206Cu) { return; }
    ctx->pc = 0x2D206Cu;
label_2d206c:
    // 0x2d206c: 0xdfbf0080
    ctx->pc = 0x2d206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d2070:
    // 0x2d2070: 0xdfb20070
    ctx->pc = 0x2d2070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2074: 0xdfb10060
    ctx->pc = 0x2d2074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2078: 0xdfb00050
    ctx->pc = 0x2d2078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d207c: 0x3e00008
    ctx->pc = 0x2D207Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D1FC4u: goto label_2d1fc4;
            case 0x2D2024u: goto label_2d2024;
            case 0x2D2044u: goto label_2d2044;
            case 0x2D2048u: goto label_2d2048;
            case 0x2D2054u: goto label_2d2054;
            case 0x2D206Cu: goto label_2d206c;
            case 0x2D2070u: goto label_2d2070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2084u;
}
