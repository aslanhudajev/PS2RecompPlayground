#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_SetupDvdFs
// Address: 0x171238 - 0x1712dc
void ADXPS2_SetupDvdFs_0x171238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_SetupDvdFs");


    ctx->pc = 0x171238u;

    // 0x171238: 0x27bdffd0
    ctx->pc = 0x171238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17123c: 0x282d
    ctx->pc = 0x17123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171240: 0xffb10010
    ctx->pc = 0x171240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x171244: 0x80882d
    ctx->pc = 0x171244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171248: 0xffb00000
    ctx->pc = 0x171248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17124c: 0x3c040017
    ctx->pc = 0x17124cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x171250: 0xffbf0020
    ctx->pc = 0x171250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171254: 0xc05d648
    ctx->pc = 0x171254u;
    SET_GPR_U32(ctx, 31, 0x17125Cu);
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4656));
    ctx->pc = 0x175920u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsEntryErrFunc_0x175920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17125Cu; }
        else if (ctx->pc != 0x17125Cu) { ctx->pc = 0x17125Cu; }
    }
    if (ctx->pc != 0x17125Cu) { return; }
    ctx->pc = 0x17125Cu;
    // 0x17125c: 0x3c10002d
    ctx->pc = 0x17125cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)45 << 16));
    // 0x171260: 0x3c050017
    ctx->pc = 0x171260u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x171264: 0x26105898
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 22680));
    // 0x171268: 0x24a574b8
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29880));
    // 0x17126c: 0x200202d
    ctx->pc = 0x17126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171270: 0xc05d0ea
    ctx->pc = 0x171270u;
    SET_GPR_U32(ctx, 31, 0x171278u);
    ctx->pc = 0x171274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1743A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsAddDev_0x1743a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171278u; }
        else if (ctx->pc != 0x171278u) { ctx->pc = 0x171278u; }
    }
    if (ctx->pc != 0x171278u) { return; }
    ctx->pc = 0x171278u;
    // 0x171278: 0xc05d1b4
    ctx->pc = 0x171278u;
    SET_GPR_U32(ctx, 31, 0x171280u);
    ctx->pc = 0x17127Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1746D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsSetDefDev_0x1746d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171280u; }
        else if (ctx->pc != 0x171280u) { ctx->pc = 0x171280u; }
    }
    if (ctx->pc != 0x171280u) { return; }
    ctx->pc = 0x171280u;
    // 0x171280: 0x1220000c
    ctx->pc = 0x171280u;
    {
        const bool branch_taken_0x171280 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x171284u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171280) {
            ctx->pc = 0x1712B4u;
            goto label_1712b4;
        }
    }
    ctx->pc = 0x171288u;
    // 0x171288: 0x8e240008
    ctx->pc = 0x171288u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17128c: 0x8e25000c
    ctx->pc = 0x17128cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x171290: 0x8e260010
    ctx->pc = 0x171290u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x171294: 0xc05e174
    ctx->pc = 0x171294u;
    SET_GPR_U32(ctx, 31, 0x17129Cu);
    ctx->pc = 0x171298u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1785D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiSetRdMode_0x1785d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17129Cu; }
        else if (ctx->pc != 0x17129Cu) { ctx->pc = 0x17129Cu; }
    }
    if (ctx->pc != 0x17129Cu) { return; }
    ctx->pc = 0x17129Cu;
    // 0x17129c: 0x8e240000
    ctx->pc = 0x17129cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1712a0: 0xdfbf0020
    ctx->pc = 0x1712a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1712a4: 0xdfb10010
    ctx->pc = 0x1712a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1712a8: 0xdfb00000
    ctx->pc = 0x1712a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1712ac: 0x805e17c
    ctx->pc = 0x1712ACu;
    ctx->pc = 0x1712B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1785F0u;
    dvCiSetRootDir_0x1785f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1712B4u;
label_1712b4:
    // 0x1712b4: 0x282d
    ctx->pc = 0x1712b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712b8: 0x302d
    ctx->pc = 0x1712b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712bc: 0xc05e174
    ctx->pc = 0x1712BCu;
    SET_GPR_U32(ctx, 31, 0x1712C4u);
    ctx->pc = 0x1712C0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1785D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiSetRdMode_0x1785d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712C4u; }
        else if (ctx->pc != 0x1712C4u) { ctx->pc = 0x1712C4u; }
    }
    if (ctx->pc != 0x1712C4u) { return; }
    ctx->pc = 0x1712C4u;
    // 0x1712c4: 0xdfbf0020
    ctx->pc = 0x1712c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1712c8: 0x202d
    ctx->pc = 0x1712c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712cc: 0xdfb10010
    ctx->pc = 0x1712ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1712d0: 0xdfb00000
    ctx->pc = 0x1712d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1712d4: 0x805e17c
    ctx->pc = 0x1712D4u;
    ctx->pc = 0x1712D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1785F0u;
    dvCiSetRootDir_0x1785f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1712DCu;
}
